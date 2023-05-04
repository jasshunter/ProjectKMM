package com.co.sentinelmobilekmm.Login

import com.co.sentinelmobilekmm.NetworkQuery.Api
import com.co.sentinelmobilekmm.NetworkQuery.NetworkQuery
import dev.icerock.moko.mvvm.flow.CFlow
import dev.icerock.moko.mvvm.flow.CMutableStateFlow
import dev.icerock.moko.mvvm.flow.CStateFlow
import dev.icerock.moko.mvvm.flow.cFlow
import dev.icerock.moko.mvvm.flow.cMutableStateFlow
import dev.icerock.moko.mvvm.flow.cStateFlow
import dev.icerock.moko.mvvm.viewmodel.ViewModel
import kotlinx.coroutines.channels.Channel
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.combine
import kotlinx.coroutines.flow.receiveAsFlow
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.launch
import kotlinx.serialization.decodeFromString
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json

class LoginViewModel : ViewModel() {
    val email: CMutableStateFlow<String> = MutableStateFlow("").cMutableStateFlow()
    val password: CMutableStateFlow<String> = MutableStateFlow("").cMutableStateFlow()
    //val isValidEmail: CMutableStateFlow<Boolean> = MutableStateFlow(false).cMutableStateFlow()

    private val _isLoading: MutableStateFlow<Boolean> = MutableStateFlow(false)
    val isLoading: CStateFlow<Boolean> = _isLoading.cStateFlow()

    val isButtonEnabled: CStateFlow<Boolean> =
        combine(isLoading, email, password) { isLoading, email, password ->
            isLoading.not() && email.isNotBlank() && password.isNotBlank()
        }.stateIn(viewModelScope, SharingStarted.Eagerly, false).cStateFlow()

    private val _actions = Channel<Action>()
    val actions: CFlow<Action> get() = _actions.receiveAsFlow().cFlow()

    fun onLoginPressed() {
        if (password.value.isNotEmpty() && email.value.isNotBlank()) {
            _isLoading.value = true
            viewModelScope.launch {
                Login()
            }
        }
    }

    suspend fun Login() {

        var ac: Action = Action.LoginError
        val user = LoginRequestModel("${email.value}", "${password.value}")

        NetworkQuery().ktorPost(url = Api().login, body = Json.encodeToString(user), successful = { response ->
            val deco = Json.decodeFromString<LoginResponseModel>(response)
            //print("RRR: ${response.first().title ?: "N"}")
            print("RRR: ${deco}")
            _isLoading.value = false
            ac = Action.LoginSuccess
        }, error = {
            ac = Action.LoginError
            _isLoading.value = false
        })

        _actions.send(ac)
    }

    sealed interface Action {
        object LoginSuccess : Action
        object LoginError : Action
    }
}
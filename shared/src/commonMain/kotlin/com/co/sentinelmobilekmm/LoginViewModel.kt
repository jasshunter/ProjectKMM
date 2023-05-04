package com.co.sentinelmobilekmm

import dev.icerock.moko.mvvm.flow.CFlow
import dev.icerock.moko.mvvm.flow.CMutableStateFlow
import dev.icerock.moko.mvvm.flow.CStateFlow
import dev.icerock.moko.mvvm.flow.cFlow
import dev.icerock.moko.mvvm.flow.cMutableStateFlow
import dev.icerock.moko.mvvm.flow.cStateFlow
import dev.icerock.moko.mvvm.viewmodel.ViewModel
import kotlinx.coroutines.channels.Channel
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.combine
import kotlinx.coroutines.flow.receiveAsFlow
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.launch

class LoginViewModel : ViewModel() {
    val email: CMutableStateFlow<String> = MutableStateFlow("").cMutableStateFlow()
    val password: CMutableStateFlow<String> = MutableStateFlow("").cMutableStateFlow()
    val isValidEmail: CMutableStateFlow<Boolean> = MutableStateFlow(false).cMutableStateFlow()

    private val _isLoading: MutableStateFlow<Boolean> = MutableStateFlow(false)
    val isLoading: CStateFlow<Boolean> = _isLoading.cStateFlow()

    val isButtonEnabled: CStateFlow<Boolean> =
        combine(isLoading, password, isValidEmail) { isLoading, password , isValidEmail->
            isLoading.not() && password.isNotBlank() && isValidEmail
        }.stateIn(viewModelScope, SharingStarted.Eagerly, false).cStateFlow()

    private val _actions = Channel<Action>()
    val actions: CFlow<Action> get() = _actions.receiveAsFlow().cFlow()

    fun onLoginPressed() {
        if (password.value.isNotEmpty() && isValidEmail.value) {
            _isLoading.value = true
            viewModelScope.launch {
                delay(1000)
                _isLoading.value = false
                _actions.send(Action.LoginSuccess)
            }
        }
    }

    sealed interface Action {
        object LoginSuccess : Action
    }
}
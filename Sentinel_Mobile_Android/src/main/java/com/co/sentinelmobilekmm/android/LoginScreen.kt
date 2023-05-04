package com.co.sentinelmobilekmm.android

import android.content.Context
import android.widget.Toast
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController
import com.co.sentinelmobilekmm.android.Navigation.AppScreens
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.size
import androidx.compose.material.Button
import androidx.compose.material.Text
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.tooling.preview.Preview
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.rememberNavController
import com.co.sentinelmobilekmm.Login.LoginViewModel
import com.co.sentinelmobilekmm.android.UI.EmailTextField
import com.co.sentinelmobilekmm.android.UI.LoadingAnimation
import com.co.sentinelmobilekmm.android.UI.PasswordTextField
import dev.icerock.moko.mvvm.flow.compose.observeAsActions

@Composable
fun LoginScreen(navController: NavHostController, viewModel: LoginViewModel = viewModel()) {

    val context: Context = LocalContext.current

    val email: String by viewModel.email.collectAsState()
    val password: String by viewModel.password.collectAsState()
    //val isValidEmail: Boolean by viewModel.isValidEmail.collectAsState()
    val isLoginButtonEnabled: Boolean by viewModel.isButtonEnabled.collectAsState()
    val isLoading: Boolean by viewModel.isLoading.collectAsState()

    viewModel.actions.observeAsActions { action ->
        when (action) {
            LoginViewModel.Action.LoginSuccess ->
                {
                    println("Datta: ${email} - ${password}")
                    navController.popBackStack()
                    navController.navigate(AppScreens.MainScreen.route)
                }

            else -> {
                Toast.makeText(context, "login error!", Toast.LENGTH_SHORT).show()
            }
        }
    }

    Box(
        contentAlignment = Alignment.Center,
        modifier = Modifier.fillMaxSize(),
    ) {

        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(horizontal = 16.dp),
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.Center,
        ) {

            Spacer(modifier = Modifier.weight(1f))
            Image(painter = painterResource(R.drawable.androidsvg),
                contentDescription = "Imagen login",
                Modifier.size(150.dp, 150.dp))
            EmailTextField(email = email, onValueChange = { newValue -> viewModel.email.value = newValue }, imeAction = ImeAction.Next)
            PasswordTextField(password = password, onValueChange = { newValue -> viewModel.password.value = newValue }, imeAction = ImeAction.Done, withButton = true, callback = viewModel::onLoginPressed)
            Spacer(modifier = Modifier.weight(1f))
            Button(onClick = viewModel::onLoginPressed,
                enabled = isLoginButtonEnabled,
                modifier = Modifier.padding(bottom = 22.dp)
            ) {
                Text(text = "Iniciar sesión")
            }
        }

        if (isLoading) {

            LoadingAnimation()
        }
    }
}

@Preview(showBackground = true, showSystemUi = true)
@Composable
fun LoginScreenPreview() {
    LoginScreen(rememberNavController())
}
package com.co.sentinelmobilekmm.android.UI

import android.util.Patterns
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.KeyboardActions
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material.OutlinedTextField
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalFocusManager
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.text.input.KeyboardType
import androidx.compose.ui.text.input.VisualTransformation
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp

@Composable
fun EmailTextField(email: String, onValueChange: (String) -> Unit, imeAction: ImeAction) {
    // Creamos un estado mutable para almacenar el email
    //val email = remember { mutableStateOf("") }
    // Configuramos las opciones de teclado para mostrar un teclado adecuado para emails
    val focusManager = LocalFocusManager.current
    val keyboardOptions = KeyboardOptions.Default.copy(
        keyboardType = KeyboardType.Email,
        imeAction = imeAction
    )
    val keyboardActions = KeyboardActions(
        onDone = {
            if (imeAction == ImeAction.Done) {
                focusManager.clearFocus()
            }
        }
    )
    // Utilizamos una transformación visual vacía para que se muestre el email tal y como se escribe
    val visualTransformation = VisualTransformation.None
    val isValid = isEmailValid(email)
    OutlinedTextField(
        // Asignamos el valor del email al estado mutable
        value = email,
        // Modificamos el valor del email cuando el usuario escribe en el campo de texto
        onValueChange = onValueChange,
        // Establece el campo de texto como de una sola línea
        singleLine = true,
        // Configuramos las opciones de teclado para mostrar el teclado adecuado
        keyboardOptions = keyboardOptions,
        keyboardActions = keyboardActions,
        // Utilizamos una transformación visual vacía para que se muestre el email tal y como se escribe
        visualTransformation = visualTransformation,
        // Añadimos un texto de sugerencia
        label = { Text(text = "Correo electrónico") },
        placeholder = { Text(text = "Correo electrónico") },
        // Añadimos una validación para comprobar si el email es válido
        //isError = email.isNotEmpty() && !isValid,
        // El textfield ocupa todo el ancho de la pantalla
        modifier = Modifier
            .fillMaxWidth()
            .padding(bottom = 16.dp),
        shape = RoundedCornerShape(8.dp)
    )

    //isValidEmail(isValid)
}

fun isEmailValid(email: String): Boolean {
    return Patterns.EMAIL_ADDRESS.matcher(email).matches()
}

@Preview(showBackground = true)
@Composable
fun EmailTextFieldPreview() {
    EmailTextField(email = "", onValueChange = {}, imeAction = ImeAction.Next)
}
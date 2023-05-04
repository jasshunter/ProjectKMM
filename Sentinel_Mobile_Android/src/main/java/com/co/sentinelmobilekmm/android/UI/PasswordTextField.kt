package com.co.sentinelmobilekmm.android.UI

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.KeyboardActions
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material.Icon
import androidx.compose.material.IconButton
import androidx.compose.material.OutlinedTextField
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.MutableState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalFocusManager
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.input.ImeAction
import androidx.compose.ui.text.input.KeyboardType
import androidx.compose.ui.text.input.PasswordVisualTransformation
import androidx.compose.ui.text.input.VisualTransformation
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.co.sentinelmobilekmm.android.R

@Composable
fun PasswordTextField(password: String, onValueChange: (String) -> Unit, imeAction: ImeAction, withButton: Boolean, callback: () -> Unit) {
    // Creamos un estado mutable para almacenar la contraseña
    //var password by remember { mutableStateOf(text) }
    val focusManager = LocalFocusManager.current
    val keyboardOptions = KeyboardOptions.Default.copy(
        keyboardType = KeyboardType.Password,
        imeAction = imeAction
    )
    val keyboardActions = KeyboardActions(
        onDone = {
            if (imeAction == ImeAction.Done) {
                callback()
                focusManager.clearFocus()
            }
        }
    )
    // Creamos un estado mutable para controlar la visualización de los caracteres
    var passwordVisible by remember { mutableStateOf(false) }

    // Utilizamos una transformación visual adecuada según el estado de visualización de la contraseña
    val visualTransformation = if (!passwordVisible) {
        PasswordVisualTransformation()
    } else {
        VisualTransformation.None
    }

    Box(
        modifier = Modifier.fillMaxWidth(),
        contentAlignment = Alignment.CenterEnd
        //verticalAlignment = Alignment.CenterVertically
    ) {
        OutlinedTextField(
            // Asignamos el valor de la contraseña al estado mutable
            value = password,
            // Modificamos el valor de la contraseña cuando el usuario escribe en el campo de texto
            onValueChange = onValueChange,
            // Establece el campo de texto como de una sola línea
            singleLine = true,
            // Configuramos las opciones de teclado para mostrar el teclado adecuado
            keyboardOptions = keyboardOptions,
            keyboardActions = keyboardActions,
            // Utilizamos la transformación visual adecuada según el estado de visualización de la contraseña
            visualTransformation = visualTransformation,
            // Añadimos un texto de sugerencia
            label = { Text(text = "Contraseña") },
            placeholder = { Text(text = "Contraseña") },
            modifier = Modifier
                //.weight(1f)
                .fillMaxWidth(),
            shape = RoundedCornerShape(8.dp),
        )

        if (withButton) {
            // Añadimos un botón para cambiar el estado de visualización de la contraseña
            IconButton(onClick = { passwordVisible = !passwordVisible }) {
                Icon(painter = if (!passwordVisible) painterResource(id = R.drawable.eyeopen) else painterResource(
                    id = R.drawable.eyeclosed ),
                    contentDescription = "",
                    Modifier.size(24.dp, 24.dp))
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun PasswordTextFieldPreview() {
    PasswordTextField(password = "", onValueChange = {}, imeAction = ImeAction.Done, withButton = true, callback = {})
}
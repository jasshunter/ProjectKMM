package com.co.sentinelmobilekmm.Login

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class LoginRequestModel(
    @SerialName("usuario")
    val usuario: String,
    @SerialName("password")
    val password: String,
)

@Serializable
data class LoginResponseModel(
    val usuario: String?,
    val nombre: String?,
    val rol: String?,
    val area: String?,
    val constructora: String?,
    val token: String?,
    val pemisos: Array<LoginPemisosModel>?
)

@Serializable
data class LoginPemisosModel(
    val id: Int?,
    val detalle: String?
)
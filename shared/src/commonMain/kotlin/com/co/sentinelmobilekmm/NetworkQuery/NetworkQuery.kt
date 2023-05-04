package com.co.sentinelmobilekmm.NetworkQuery

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.call.receive
import io.ktor.client.plugins.ClientRequestException
import io.ktor.client.request.get
import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.bodyAsText
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.decodeFromString
import kotlinx.serialization.json.Json

class NetworkQuery {

    private val client = HttpClient()

    suspend fun greeting2(url: String, successful: (Array<MyResponse>) -> Unit, error: () -> Unit) {
        try {

            val response = client.get(url)
            val json = response.body<String>()
            val deco = Json.decodeFromString<Array<MyResponse>>(json)
            val statusCode = response.status.value

            /*when (statusCode) {

                in 200..300 -> {
                    successful(deco)
                }

                else -> {
                    error()
                }
            }*/

            if (statusCode in 200..300) {
                successful(deco)
            }

            if (statusCode in 400..Int.MAX_VALUE) {
                error()
            }

        } catch (e: ClientRequestException) {
            println("Se ha producido un error en la petición: ${e.message}")
        }
    }
}

@Serializable
data class MyResponse(
    val userId: Int?,
    val id: Int?,
    val title: String?,
    val body: String?
)
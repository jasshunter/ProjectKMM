package com.co.sentinelmobilekmm.NetworkQuery

import com.co.sentinelmobilekmm.Login.LoginResponseModel
import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.call.receive
import io.ktor.client.plugins.ClientRequestException
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.request.get
import io.ktor.client.request.post
import io.ktor.client.request.setBody
import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.bodyAsText
import io.ktor.http.ContentType
import io.ktor.http.contentType
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.decodeFromString
import kotlinx.serialization.json.Json
import kotlinx.serialization.encodeToString

class NetworkQuery {

    private val client = HttpClient(){
        install(ContentNegotiation) {
            json()
        }
    }

    suspend fun ktorGest(url: String, successful: (String) -> Unit, error: (String) -> Unit) {
        try {

            val response = client.get(url)
            val json = response.body<String>()
            //val deco = Json.decodeFromString<Array<MyResponse>>(json)
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
                successful(json)
            }

            if (statusCode in 400..Int.MAX_VALUE) {
                error(json)
            }

            client.close()

        } catch (e: ClientRequestException) {
            println("Se ha producido un error en la petición ktorGest: ${e.message}")
        }
    }

    suspend fun ktorPost(url: String, body: String, successful: (String) -> Unit, error: (String) -> Unit) {

        try {

            val response = client.post(url) {
                contentType(ContentType.Application.Json)
                setBody(body)
            }
            val json = response.body<String>()
            //val deco = Json.decodeFromString<Array<LoginResponseModel>>(json)
            //val deco = Json.decodeFromString<LoginResponseModel>(json)
            val statusCode = response.status.value

            if (statusCode in 200..300) {
                successful(json)
            }

            if (statusCode in 400..Int.MAX_VALUE) {
                error(json)
            }

            client.close()

        } catch (e: ClientRequestException) {
            println("Se ha producido un error en la petición ktorPost: ${e.message}")
        }
    }
}
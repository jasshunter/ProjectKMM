package com.co.sentinelmobilekmm

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform
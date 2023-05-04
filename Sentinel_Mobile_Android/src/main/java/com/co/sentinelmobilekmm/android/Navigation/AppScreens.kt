package com.co.sentinelmobilekmm.android.Navigation

sealed class AppScreens(val route: String) {
    object SplashScreen: AppScreens("splash_screen")
    object MainScreen: AppScreens("main_screen")
    object LoginScreen: AppScreens("login_screen")
}
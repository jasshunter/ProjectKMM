package com.co.sentinelmobilekmm.android.Navigation

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.co.sentinelmobilekmm.android.LoginScreen
import com.co.sentinelmobilekmm.android.MainScreen
import com.co.sentinelmobilekmm.android.Splash.SpashScreen

@Composable
fun AppNavigation() {
    val navController = rememberNavController()
    NavHost(navController = navController, startDestination = AppScreens.SplashScreen.route) {
        composable(AppScreens.SplashScreen.route) {
            SpashScreen(navController)
        }
        composable(AppScreens.MainScreen.route) {
            MainScreen()
        }
        composable(AppScreens.LoginScreen.route) {
            LoginScreen(navController)
        }
    }
}
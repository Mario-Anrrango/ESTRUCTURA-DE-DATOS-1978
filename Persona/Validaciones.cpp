/***********************************************************************
 * Module:  Validaciones.cpp
 * Author:  mario
 * Modified: lunes, 4 de noviembre de 2024 17:50:21
 * Purpose: Implementation of the class Validaciones
 ***********************************************************************/

#include "Validaciones.h"
#include <iostream>
#include <algorithm>

using namespace std;

// Función para limpiar espacios en blanco
string limpiarEspacios(string entrada) {
    entrada.erase(remove_if(entrada.begin(), entrada.end(), ::isspace), entrada.end());
    return entrada;
}

bool validarUsuario(string usuarioCorrecto){
    string usuarioIngresado;
    while (true) {
        cout << "Ingrese su usuario: ";
        getline(cin, usuarioIngresado);

        // Limpiar espacios en blanco
        usuarioIngresado = limpiarEspacios(usuarioIngresado);

        if (usuarioIngresado == usuarioCorrecto) {
            return true;
        } else {
            cout << "Usuario incorrecto. Intente de nuevo.\n";
        }
    }
}

bool validarPassword(string passwordCorrecto) {
    string passwordIngresado;
    while (true) {
        cout << "Ingrese su contraseña: ";
        getline(cin, passwordIngresado);

        // Limpiar espacios en blanco
        passwordIngresado = limpiarEspacios(passwordIngresado);

        if (passwordIngresado == passwordCorrecto) {
            return true;
        } else {
            cout << "Contraseña incorrecta. Intente de nuevo.\n";
        }
    }
}
/***********************************************************************
 * Module:  Persona.cpp
 * Author:  mario
 * Modified: viernes, 1 de noviembre de 2024 11:40:04
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include <iostream>
#include "Persona.h"
#include "Validaciones.h"
#include <string>

using namespace std;

Persona::Persona(string _usuario, string _password){
   this -> usuario = _usuario;
   this -> password = _password;
}

Persona::~Persona(){
}

void Persona::setUsuario(string _usuario){
   this -> usuario = _usuario;
}

void Persona::setPassword(string _password){
   this -> password = _password;
}

string Persona::getUsuario(void)
{
   return usuario;
}

string Persona::getPassword(void){
   return password;
}

int main() {
   string usuarioCorrecto = "Mario_AB";
   string passwordCorrecto = "MarioSAB";

   cout << "\t REINGRESO DE DATOS: CAMBIO DE DATOS" << endl;

   if (validarUsuario(usuarioCorrecto) && validarPassword(passwordCorrecto)) {
       Persona persona1(usuarioCorrecto, passwordCorrecto);

       cout << "\nDatos ingresados:\n";
       cout << "Usuario: " << persona1.getUsuario() << endl;
       cout << "Contraseña: " << persona1.getPassword() << endl;

       string nuevoUsuario, nuevoPassword;
       cout << "\nIngrese un nuevo usuario para la persona: ";
       getline(cin, nuevoUsuario);
       persona1.setUsuario(nuevoUsuario);

       cout << "Ingrese una nueva contraseña para la persona: ";
       getline(cin, nuevoPassword);
       persona1.setPassword(nuevoPassword);

       cout << "\nDatos cambiados:\n";
       cout << "Usuario actualizado: " << persona1.getUsuario() << endl;
       cout << "Contraseña actualizada: " << persona1.getPassword() << endl;
   } else {
       cout << "Error en la validación de credenciales." << endl;
   }
}
#include <iostream>
#include "Validaciones.h"
#include <string>

using namespace std;

int SumarEnteros(int obj1, int obj2) {
    return obj1 + obj2;
}

float SumarFlotantes(float obj1, float obj2) {
    return obj1 + obj2;
}

int ingresarEntero(char* msj) {
    string entrada = Validaciones::capturarCadenaNumerica(msj);
    return atoi(entrada.c_str());
}

float ingresarFloat(const char* msj) {
    string entrada = Validaciones::capturarCadenaNumerica(msj, true);
    return atof(entrada.c_str());
}

double ingresarDouble(const char* msj) {
    string entrada = Validaciones::capturarCadenaNumerica(msj, true);
    return atof(entrada.c_str());
}

int main() {

    int numero1 = ingresarEntero("Ingrese un valor entero: ");
    cout << endl;
    int numero2 = ingresarEntero("Ingrese otro valor entero: ");
    cout << endl;
    int ResultadoEnteros = SumarEnteros(numero1, numero2);
    cout << "Suma de enteros: " << ResultadoEnteros << endl;

    float num1 = ingresarFloat("Ingrese un valor flotante: ");
    cout << endl;
    float num2 = ingresarFloat("Ingrese otro valor flotante: ");
    cout << endl;
    float ResultadoFloat = SumarFlotantes(num1, num2);
    cout << "Suma de flotantes: " << ResultadoFloat << endl;

    double numDouble = ingresarDouble("Ingrese un valor double: ");
    cout << "\nDouble ingresado: " << numDouble << endl;

    char letra = Validaciones::ingresarLetra("Ingrese una letra: ");
    cout << "\nLetra ingresada: " << letra << endl;

    string cadena = Validaciones::ingresarString("Ingrese una cadena de texto: ");
    cout << "\nCadena ingresada: " << cadena << endl;

    return 0;
}
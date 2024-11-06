/***********************************************************************
 * Module:  Estudiante.cpp
 * Author:  mario
 * Modified: domingo, 3 de noviembre de 2024 20:55:42
 * Purpose: Implementation of the class Estudiante
 ***********************************************************************/

#include "Estudiante.h"
#include <iostream>
#include <numeric>

using namespace std;

Estudiante::Estudiante(string nombre) : nombre(nombre) {}

void Estudiante::setNombre(string nombre) {
    this->nombre = nombre;
}

string Estudiante::getNombre(){
    return nombre;
}

vector<float> Estudiante::getCalificaciones(){
    return calificaciones;
}

void Estudiante::agregarCalificacion(float calificacion) {
    if (calificacion >= 0 && calificacion <= 20) {
        calificaciones.push_back(calificacion);
    } else {
        cout << "Calificación inválida. Debe estar entre 0 y 20." << endl;
    }
}

float Estudiante::calcularPromedio(){
    if (calificaciones.empty()) return 0.0;
    float suma = accumulate(calificaciones.begin(), calificaciones.end(), 0.0);
    return suma / calificaciones.size();
}

void Estudiante::mostrarInformacion(){
    cout << "Nombre: " << nombre << endl;
    cout << "Promedio: " << calcularPromedio() << endl;
}

using namespace std;

int main() {
    string nombre;
    int cantidadCalificaciones;
    float calificacion;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    Estudiante estudiante(nombre);

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> cantidadCalificaciones;

    for (int i = 0; i < cantidadCalificaciones; ++i) {
        do {
            cout << "Ingrese la calificación " << i + 1 << " (entre 0 y 20): ";
            cin >> calificacion;

            if (calificacion < 0 || calificacion > 20) {
                cout << "Calificación inválida. Debe estar entre 0 y 20." << endl;
            }

        } while (calificacion < 0 || calificacion > 20);

        estudiante.agregarCalificacion(calificacion);
    }

    cout << "\nInformación del estudiante:" << endl;
    estudiante.mostrarInformacion();

}
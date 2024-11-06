/***********************************************************************
 * Module:  Rectangulo.cpp
 * Author:  mario
 * Modified: jueves, 31 de octubre de 2024 23:27:06
 * Purpose: Implementation of the class Rectangulo
 ***********************************************************************/

#include "Rectangulo.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(float largo, float ancho) {
    setLargo(largo);
    setAncho(ancho);
}

void Rectangulo::setLargo(float largo) {
    if (largo > 0) {
        this->largo = largo;
    } else {
        throw invalid_argument("El largo debe ser positivo.");
    }
}

void Rectangulo::setAncho(float ancho) {
    if (ancho > 0) {
        this->ancho = ancho;
    } else {
        throw invalid_argument("El ancho debe ser positivo.");
    }
}

float Rectangulo::getLargo(){
    return largo;
}

float Rectangulo::getAncho(){
    return ancho;
}

float Rectangulo::calcularArea(){
    return largo * ancho;
}

float Rectangulo::calcularPerimetro(){
    return 2 * (largo + ancho);
}

#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main() {
    float largo, ancho;

    do {
        cout << "Ingrese el largo del rectángulo (positivo): ";
        cin >> largo;
        if (largo <= 0) {
            cout << "Error: El largo debe ser un valor positivo.\n";
        }
    } while (largo <= 0);

    do {
        cout << "Ingrese el ancho del rectángulo (positivo): ";
        cin >> ancho;
        if (ancho <= 0) {
            cout << "Error: El ancho debe ser un valor positivo.\n";
        }
    } while (ancho <= 0);

    Rectangulo rectangulo(largo, ancho);

    cout << "\nÁrea del rectángulo: " << rectangulo.calcularArea() << endl;
    cout << "Perímetro del rectángulo: " << rectangulo.calcularPerimetro() << endl;
}
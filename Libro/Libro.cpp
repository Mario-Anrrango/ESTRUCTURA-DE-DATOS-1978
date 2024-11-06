/***********************************************************************
 * Module:  Libro.cpp
 * Author:  mario
 * Modified: s�bado, 2 de noviembre de 2024 18:15:05
 * Purpose: Implementation of the class Libro
 ***********************************************************************/

#include <iostream>
#include "Libro.h"
#include <string>
using namespace std;


Libro::Libro(string titulo,string autor, int anio) 
    : titulo(titulo), autor(autor), anio(anio) {}

void Libro::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Libro::setAutor(string autor) {
    this->autor = autor;
}

void Libro::setAnio(int anio) {
    this->anio = anio;
}

string Libro::getTitulo(){
    return titulo;
}

string Libro::getAutor(){
    return autor;
}

int Libro::getAnio(){
    return anio;
}

void Libro::mostrarInformacion(){
   cout << "Título: " << titulo << ", Autor: " << autor << ", Año: " << anio << endl;
}

int main() {
    string titulo, autor;
    int anio;

    cout << "Ingrese el título del libro: ";
    getline(cin, titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, autor);
    cout << "Ingrese el año de publicación del libro: ";
    cin >> anio;

    Libro libro(titulo, autor, anio);
    libro.mostrarInformacion();

}

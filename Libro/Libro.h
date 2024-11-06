/***********************************************************************
 * Module:  Libro.h
 * Author:  mario
 * Modified: s�bado, 2 de noviembre de 2024 18:15:05
 * Purpose: Declaration of the class Libro
 ***********************************************************************/

#include <string>
#if !defined(__Libro_Libro_h)
#define __Libro_Libro_h
using namespace std;

class Libro {
public:
    Libro(string titulo = "",string autor = "", int anio = 0);
    void setTitulo(string titulo);
    void setAutor(string autor);
    void setAnio(int anio);
    string getTitulo();
    string getAutor();
    int getAnio();
    void mostrarInformacion();

private:
   string titulo;
   string autor;
   int anio;
};

#endif
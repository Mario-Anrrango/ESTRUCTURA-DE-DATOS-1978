/***********************************************************************
 * Module:  Estudiante.h
 * Author:  mario
 * Modified: domingo, 3 de noviembre de 2024 20:55:42
 * Purpose: Declaration of the class Estudiante
 ***********************************************************************/

#if !defined(__Estudiante_Estudiante_h)
#define __Estudiante_Estudiante_h
#include <string>
#include <vector>

using namespace std;

class Estudiante {
public:
    Estudiante(string nombre = "");

   void setNombre(string nombre);
   string getNombre();
   vector<float> getCalificaciones();

    void agregarCalificacion(float calificacion);
    float calcularPromedio();
    void mostrarInformacion();

private:
   string nombre;
   vector<float> calificaciones;
};

#endif
#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

using namespace std;

class Validaciones {
public:
    static string capturarCadenaNumerica(const char* msj, bool permitePunto = false);
    static char ingresarLetra(const char* msj);
    static string ingresarString(const char* msj);
};

#endif
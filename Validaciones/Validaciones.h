#ifndef __VALIDACIONES_H
#define __VALIDACIONES_H
#include <string>

class Validaciones {
public:
    string capturarCadenaNumerica(char* msj, bool permitePunto = false);
    char ingresarLetra(char* msj);
    string ingresarString(char* msj);
};

#endif
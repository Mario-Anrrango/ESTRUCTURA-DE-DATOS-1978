#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

class Validaciones {
public:
    static std::string capturarCadenaNumerica(const char* msj, bool permitePunto = false);
    static char ingresarLetra(const char* msj);
    static std::string ingresarString(const char* msj);
};

#endif
/***********************************************************************
 *            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                  *
 * Proposito:                      Programar una suma fracciones       *
 * Autor:                          Mario Anrrango                      *
 * Fecha de creacion:              06/10/2024                          *
 * Fecha de modificacion:          07/11/2024                          *
 * Materia:                        Estructura de datos                 *
 * NRC :                           1978                                *
 ***********************************************************************/

#include "Validaciones.h"
#include <iostream>
#include <conio.h>

using namespace std;

string Validaciones::capturarCadenaNumerica(char* msj, bool permitePunto) {
    char cad[20];
    char c;
    int i = 0;
    bool puntoDecimal = false;
    printf("%s", msj);

    while ((c = getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            cad[i++] = c;
        } else if (c == 8) {
            if (i > 0) {
                printf("\b \b");
                i--;
            }
        } else if (c == '.' && permitePunto && !puntoDecimal) {
            puntoDecimal = true;
            printf("%c", c);
            cad[i++] = c;
        }
    }
    cad[i] = '\0';
    return string(cad);
}
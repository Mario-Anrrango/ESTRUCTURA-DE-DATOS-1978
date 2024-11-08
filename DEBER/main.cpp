#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int ingresar(const char*);
char numAChar(const char*);
string charAString(const char*);

int ingresar(const char* msj) {
    char cad[10];
    char c;
    int i = 0;
    int valor;

    printf("%s", msj);

    while ((c = _getch()) != 13) {
        if (c >= '0' && c <= '9') {  
            printf("%c", c);  
            cad[i++] = c;         
        }
    }
    cad[i] = '\0';                   
    valor = atoi(cad);               
    return valor;                    
}

char numAChar(const char* msj){

    int num;
    char caract;

    cout << msj;

    while (true){
        cin >> num;
        if ((cin.fail() || num<32 || num>254)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ingrese un numero valido (mayor o igual a 32 y menor o igual a 254): ";
        } else {
            break;
        }
    }
    caract = static_cast<char>(num);
    return caract;
    }

string charAString(const char* msj) {
    string result;
    char c;

    cout << msj;

    while (true) {
        c = _getch();

        if (c == 13) {
            break;
        }
        if (c >= '0' && c <= '9') {
            cout << "\nError: Solo se permiten caracteres. Ingrese nuevamente: ";
            result.clear();
            continue;
        } else {
            result += c;
            cout << c;
        }
    }

    return result;
}
                      


int main() {
    cout << "\tPRIMERA FUNCION: CHAR - INT" << endl;
    cout << " " << endl;
    int numero = ingresar("Ingrese un valor entero: ");
    cout << "\nEl valor ingresado es: " << numero << endl;
    cout << " " << endl;
    cout << "\tSEGUNDA FUNCION: INT - CHAR" << endl;
    cout << " " << endl;
    char numeroAChar = numAChar("Ingrese un número entero (mayor o igual a 32 y menor o igual a 254): ");
    cout << "El numero que se ingreso, como caracter es: " << numeroAChar;
    cout << "\tTERCERA FUNCION: CHAR - STRING" << endl;
    cout << " " << endl;
    string charAStr = charAString("Ingrese caracteres para formar una string: ");
    cout << "La cadena formada es: " << charAStr;
    return 0;
}
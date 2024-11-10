
#include <iostream>
#include <conio.h>

using namespace std;

//**Declaración de la plantilla de la clase Calculo **
template <typename T>

class Calculo{
    public:
    Calculo(T a, T b) : a(a), b(b){
    }

    T sumar();

    T restar();

    T multiplicar();

    private:
        T a;
        T b;
};

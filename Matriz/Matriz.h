/***********************************************************************
 * Module:  Matriz.h
 * Author:  mario
 * Modified: lunes, 11 de noviembre de 2024 16:36:10
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__Matriz_Matriz_h)
#define __Matriz_Matriz_h

class Matriz
{
public:
   void setMatriz(T** matriz);
   T getMatriz(void);
   Matriz();
   ~Matriz();

protected:
private:
   T matriz__;


};

#endif
/***********************************************************************
 * Module:  Persona.h
 * Author:  mario
 * Modified: lunes, 4 de noviembre de 2024 17:54:15
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Persona_Persona_h)
#define __Persona_Persona_h
using namespace std;

class Persona
{
public:
   void setUsuario(string _usuario);
   void setPassword(string _password);
   string getUsuario(void);
   string getPassword(void);
   Persona(string, string);
   ~Persona();

private:
   string usuario;
   string password;
};

#endif
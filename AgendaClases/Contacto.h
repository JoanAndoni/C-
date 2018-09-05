#include <iostream>
#include <string>

using namespace std;

class Contacto
{
private:

  string nombre;
  string telefono;
  string email;
  string direccion;

public:

  // C o n s t r u c t o r
  Contacto(string n, string t, string e, string d){
  	nombre = n;
  	telefono = t;
  	email = e;
  	direccion = d;
  }
  Contacto () {}

  // M e t o d o s
  string getNombre(){return nombre;}
  void setNombre(string n) {
    nombre = n;
  }

  string getTelefono(){return telefono;}
  void setTelefono(string t){
    telefono = t;
  }

  string getEmail(){return email;}
  void setEmail(string e){
    email = e;
  }

  string getDireccion(){return direccion;}
  void setDireccion(string d){
    direccion = d;
  }

};

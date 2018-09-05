#include "Cosa.h" 

    Cosa::Cosa()
    {
       nombre = "";
       talla = 0;
    }

    string Cosa::getNombre()
    {
       return nombre;
    }

    void Cosa::setNombre(string n)
    {
       nombre = n; 
    }

    int Cosa::getTalla()
    {
      return talla;
    }

    void Cosa::setTalla(int t)
    {
       talla = t;
    }


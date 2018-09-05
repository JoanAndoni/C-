#include <iostream>
#include <vector>
#include <string>
#include "Cosa.h"

using namespace std;

int main()
{
  vector <string> v;

  v.push_back("zarzamora");
  v.push_back("platano");
  v.push_back("manzana");

  cout<<"Elementos del vector "<<v.size()<<endl;

  v.push_back("mango");
  v.push_back("fresa");

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;

  v.pop_back();
  cout<<"Despues de quitar el ultimo: "<<endl;

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;

  //Insertar sandia en la posicion 1
  v.insert(v.begin()+1,"sandia");

  cout<<"Despues de insertar sandia:"<<endl;

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;


  v.push_back("durazno");

  cout<<"Despues de insertar durazno:"<<endl;

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;

  cout<<"Despues de borrar manzana:"<<endl;
  v.erase(v.begin()+3,v.begin()+4);

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;

  /*------------------------------------------------*/
  vector <Cosa *>things; 

  things.push_back(new Cosa());
  things[0]->setNombre("Playera");
  things[0]->setTalla(6);

  things.push_back(new Cosa());
  things[1]->setNombre("Chaleco");
  things[1]->setTalla(13);

  for(int i=0; i<things.size(); i++)
  {
     cout<<i<<": "<<things[i]->getNombre()<<", "<<things[i]->getTalla()<<endl;
  }

  return 0;
}

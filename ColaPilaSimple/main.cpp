#include "Cola.h"
#include "Pila.h"

int main()
{
  Cola *integer = new Cola();
  integer->enqueue(9);
  integer->enqueue(8);
  integer->enqueue(7);
  integer->enqueue(6);

  cout<<"Cola integers "<<endl;
  integer->print();
  cout<<endl;

  Pila *integer2 = new Pila();
  integer2->push(9);
  integer2->push(8);
  integer2->push(7);
  integer2->push(6);

  cout<<"Pila integers "<<endl;
  integer2->print();
  cout<<endl;

  return 0;
}

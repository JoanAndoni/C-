#include "Mano.h"

int main()
{
	Dedo *uno = new Dedo(); //Crea un dedo
	uno->setX(4);	// asignar valores al 1
	uno->setY(3);
	uno->setZ(12);

	Mano *m = new Mano(); // Crea una mano
	m->setPalmaX(1); // Le asigna el valor a palmaX

	m->setIndice(uno);	// Se le asigna el dedo a la mano ya creada indicando que es el indice
	m->getIndice()->setZ(14); // Desde aqui se llega a la variable de Z del dedo desde la mano

  cout<<"Posicion del dedo indice en z es "<<m->getIndice()->getZ()<<endl;  
  return 0;
}

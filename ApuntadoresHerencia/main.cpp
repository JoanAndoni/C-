#include "Circulo.h"
#include "Rectangulo.h"
// Se necesitan compilar todos los cpp de la carpeta


int main()
{
	Circulo *c;
	c = new Circulo(0, 0, 13);

	Rectangulo *r;
	r = new Rectangulo(0, 0, 12, 13);

	cout << "Area del circulo : " << c->area() << endl;

}

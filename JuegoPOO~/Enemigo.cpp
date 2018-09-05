#include "Enemigo.h"

Enemigo::Enemigo()
{
	int coordX = 0;
	int coordY = 0;
}

Enemigo::Enemigo(int x, int y) :coordX(x), coordY(y)
{
}

int Enemigo::getCoordX()
{
	return coordX;
}

void Enemigo::setCoordX(int x)
{
	coordX = x;
}

int Enemigo::getCoordY()
{
	return coordY;
}

void Enemigo::setCoordY(int y)
{
	coordY = y;
}

int Enemigo::danio()
{
	return 0;
}
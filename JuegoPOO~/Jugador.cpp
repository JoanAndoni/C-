#include "Jugador.h"

Jugador::Jugador()
{
	nombre;
	posX = 0;
	posY = 0;
	vida = 100;

}

Jugador::Jugador(string n, int x, int y, int v)
{
	nombre = n;
	posX = x;
	posY = y;
	vida = v;

}


string Jugador::getNombre()
{
	return nombre;
}

void Jugador::setNombre(string n)
{
	nombre = n;
}

int Jugador::getPosX()
{
	return posX;
}

void Jugador::setPosX(int x)
{
	posX = x;
}

int Jugador::getPosY()
{
	return posY;
}

void Jugador::setPosY(int y)
{
	posY = y;
}

int Jugador::getVida()
{
	return vida;
}

void Jugador::setVida(int v)
{
	vida = v;
}
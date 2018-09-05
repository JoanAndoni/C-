#include "Monstruo.h"

	Monstruo::Monstruo()
	{
		int tipo = 0;
	}

	Monstruo::Monstruo(int x, int y, int t) :Enemigo(x, y), tipo(t)
	{
	}

	int Monstruo::getTipo()
	{
		return tipo;
	}

	void Monstruo::setTipo(int t)
	{
		tipo = t;
	}

	int Monstruo::danio()
	{
		if (tipo == 1) return 30;
		if (tipo == 2) return 60;
		if (tipo == 3) return 80;
		else return 0;
	}

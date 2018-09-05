#include "Hoyo.h"

	Hoyo::Hoyo()
	{
		int diametro = 0;
	}

	Hoyo::Hoyo(int x, int y, int d) :Enemigo(x,y), diametro(d)
	{
	}

	int Hoyo::getDiametro()
	{
		return diametro;
	}

	void Hoyo::setDiametro(int d)
	{
		diametro = d;
	}

	int Hoyo::danio()
	{
		if (diametro == 5) return 5;
		if (diametro == 10) return -1;
		else return 0;
	}
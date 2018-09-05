#include <vector>
#include <string>
#include <iostream>
#include "Jugador.h"

using namespace std;

class Juego : public Jugador{
private:
	Jugador *jugador;
	vector <Hoyo> hoyos;
	vector <Monstruo> monstruos;
	int grind[10][10];

public:
	Juego(Jugador *jugador, vector <Hoyo> hoyos, vector <Monstruo> monstruos);
	void fillGrind();
};
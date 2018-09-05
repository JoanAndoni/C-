#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Persona{
protected:
	string nombre;
	int edad;
	int peso;
	double estatura;

public:
	Persona();
	Persona(string n, int edad, int peso, double estatura);
	int getEdad();
	void setEdad(int edad);
	double IMC();
};
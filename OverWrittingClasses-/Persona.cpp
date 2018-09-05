#include "Persona.h"

Persona::Persona(){

}

Persona::Persona(string nom, int ed, int pes, double est){
	nombre = nom;
	edad = ed;
	peso = pes;
	estatura = est;
}

int Persona::getEdad(){
	return edad;
}

void Persona::setEdad(int s){
	edad = s;
}

double Persona::IMC(){
	double imc;

	imc = (peso / pow(estatura, 2));

	return imc;
}
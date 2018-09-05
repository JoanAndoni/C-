#include "Paciente.h"

Paciente::Paciente(){

}

Paciente::Paciente(string nom, int ed, int pes, double est, string pade){
	nombre = nom;
	edad = ed;
	peso = pes;
	estatura = est;
	padecimiento = pade;
}

void Paciente::imprimeDiagnostico(){
	double imc;
	imc = IMC();
	cout << "El nombre del paciente es:        " << nombre << endl;
	cout << "Edad del paciente es:             " << edad << endl;
	cout << "Peso del paciente es:             " << peso << endl;
	cout << "Estatura del paciente es:         " << estatura << endl;
	cout << "El padecimiento del paciente es:  " << padecimiento << endl;
	cout << "El IMC del paciente es:           " << imc << endl;
}
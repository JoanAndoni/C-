#include "Persona.h"

class Paciente : public Persona{
protected:
	string padecimiento;

public:
	Paciente();
	Paciente(string n, int ed, int pes, double est, string pade);
	void imprimeDiagnostico();
};
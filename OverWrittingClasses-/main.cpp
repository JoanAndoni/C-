#include "Paciente.h"

int main()
{
	Paciente nuevo("Joan", 18, 83, 1.74, "fractura");
	nuevo.setEdad(19);

	cout << "La edad del nuevo paciente ha sido cambiada a: " << nuevo.getEdad() << endl;

	nuevo.imprimeDiagnostico();
}
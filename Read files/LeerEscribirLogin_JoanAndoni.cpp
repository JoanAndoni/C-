#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

void contadores( string palabra, int *elbamg, int *erik, int *adamar, int *tanny, int *rodo, int *muppet, int *ana)
{
	if( palabra == "elbamg") *elbamg += 1;
	if( palabra == "erik") *erik += 1;
	if( palabra == "adamar") *adamar += 1;
	if( palabra == "tanny") *tanny += 1;
	if( palabra == "rodo") *rodo += 1;
	if( palabra == "muppet") *muppet += 1;
	if( palabra == "ana") *ana += 1;
}

int main()
{
	ifstream archivo_entrada;
	char linea[128];
	int i=0;
	int elbamg=0, erik=0, adamar=0, tanny=0, rodo=0, muppet=0, ana=0;

	archivo_entrada.open("bitacora.txt");

	if (archivo_entrada.fail())
	{
		cout << "Error al abrir el archivo" << endl;
		return 0;
	}

	while(!archivo_entrada.eof())
    {
      archivo_entrada.getline(linea,sizeof(linea));
      cout<<i<<":  "<<linea<<endl;
      i++;

      string str(linea);
      istringstream iss(str);

      do
      {
        string sub;
        iss >> sub;
        cout<<"Pedazo "<< sub <<endl;
		contadores(sub, &elbamg, &erik, &adamar, &tanny, &rodo, &muppet, &ana);
      } while (iss);
    }

    archivo_entrada.close();

    ofstream archivo_salida;
    archivo_salida.open("registro.txt");

    archivo_salida << "Numero de ingresos de Elbamg:  "<< elbamg <<endl;
    archivo_salida << "Numero de ingresos de Erik:    "<< erik <<endl;
    archivo_salida << "Numero de ingresos de Adamar:  "<< adamar <<endl;
    archivo_salida << "Numero de ingresos de Tanny:   "<< tanny <<endl;
    archivo_salida << "Numero de ingresos de Rodo:    "<< rodo <<endl;
    archivo_salida << "Numero de ingresos de Muppet:  "<< muppet <<endl;
    archivo_salida << "Numero de ingresos de Ana:     "<< ana <<endl;

    archivo_salida.close();

	return 0;
}
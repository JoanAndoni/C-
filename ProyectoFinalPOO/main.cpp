// Joan Andoni González Rioz
// A00569929

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include "cuenta.h"
#include "transaccion.h"
#define n 200

using namespace std;

int creaCuenta(int numeroCuentas, cuenta usu[n])
{
	string nombre;
	int saldo;
	cout << "\nIngrese nombre: ";
	cin >> nombre;
	usu[numeroCuentas].setNom(nombre);

	cout << "Ingresar saldo: ";
	cin >> saldo;
	usu[numeroCuentas].setSal(saldo);

	cout << "El numero de cuenta del usuario es " << numeroCuentas + 1 << "\n" << endl;
	usu[numeroCuentas].setCuenta(numeroCuentas + 1);
	numeroCuentas++;

	return numeroCuentas;
}

void trans(cuenta usu[n], int operaciones[3], int retiroCuenta[n], int retiroMonto[n], int depositoCuenta[n], int depositoMonto[n], int transferenciaCuenta[n], int transferenciaMonto[n], int transferenciaOtra[n], string retiroNombres[n], string depositoNombres[n], string transferenciaNombres[n])
{
	int cuentaDeseada, opcionTra, cantidad, otraCuenta;
	cout << "\nEscoge que transaccion desea realizar\nRetiro : 1 | Deposito : 2 | Transferencia : 3 \nSalir : 0" << endl;
	cin >> opcionTra;
	cout << "\nCon que numero de cuenta va a ser la transaccion?" << endl;
	cin >> cuentaDeseada;

	if (opcionTra == 1)
	{
		cout << "\nCuanto quiere retirar de su cuenta: " << endl;
		cin >> cantidad;
		transaccion retir(usu[cuentaDeseada-1].getSal(), cantidad);
		usu[cuentaDeseada-1].setSal(retir.retiro());
		retiroCuenta[operaciones[0]] = usu[cuentaDeseada-1].getCuenta();
		retiroNombres[operaciones[0]] = usu[cuentaDeseada - 1].getNom();
		retiroMonto[operaciones[0]] = cantidad;
		operaciones[0]++;
	}
	
	if (opcionTra == 2)
	{
		cout << "\nCuanto quiere depositar en su cuenta: " << endl;
		cin >> cantidad;
		transaccion depos(usu[cuentaDeseada-1].getSal(), cantidad);
		usu[cuentaDeseada-1].setSal(depos.deposito());
		depositoCuenta[operaciones[1]] = usu[cuentaDeseada - 1].getCuenta();
		depositoNombres[operaciones[1]] = usu[cuentaDeseada - 1].getNom();
		depositoMonto[operaciones[1]] = cantidad;
		operaciones[1]++;
	}

	if (opcionTra == 3)
	{
		cout << "\nCuanto quiere depositar en la otra cuenta cuenta: " << endl;
		cin >> cantidad;
		cout << "\n¿A que cuenta desea depositar?" << endl;
		cin >> otraCuenta;
		transaccion transf(usu[cuentaDeseada-1].getSal(), cantidad);
		usu[cuentaDeseada-1].setSal(transf.transCuenta());
		usu[otraCuenta-1].setSal(transf.recibirTrans(usu[otraCuenta-1].getSal()));
		transferenciaCuenta[operaciones[2]] = usu[cuentaDeseada - 1].getCuenta();
		transferenciaNombres[operaciones[2]] = usu[cuentaDeseada - 1].getNom();
		transferenciaMonto[operaciones[2]] = cantidad;
		transferenciaOtra[operaciones[2]] = usu[otraCuenta - 1].getCuenta();
		operaciones[2]++;
	}
}


void consultas(cuenta usu[n], int numCuentas,  int operaciones[3], int retiroCuenta[n], int retiroMonto[n], int depositoCuenta[n], int depositoMonto[n], int transferenciaCuenta[n], int transferenciaMonto[n], int transferenciaOtra[n], string retiroNombres[n], string depositoNombres[n], string transferenciaNombres[n])
{
	int tipoConsulta = 1, cuentaDeseada;
	while (tipoConsulta != 0)
	{
		cout << "\nEscoge que tipo de consulta deseas ver\nRetiro : 1 | Deposito : 2 | Transferencia : 3" << endl;
		cout << "\n1.- Consultar las transacciones de una cuenta" << endl;
		cout << "2.- Lista de retiros" << endl;
		cout << "3.- Lista de depositos" << endl;
		cout << "4.- Todas las transacciones" << endl;
		cout << "5.- Ver todos los usuarios del banco" << endl;
		cout << "0.- Salir" << endl;
		cin >> tipoConsulta;

		switch (tipoConsulta)
		{
		case 1:
			int opcion;
			cout << " Ingresa la cuenta del usuario que desea ver : ";
			cin >> cuentaDeseada;
			cout << "\n  Nombre...... " << usu[cuentaDeseada-1].getNom() << endl;
			cout << "  Saldo...... " << usu[cuentaDeseada-1].getSal() << endl << endl;

			cout << "Desea ver las transacciones del usuario? Si = 1 | No = 0" << endl;
			cin >> opcion;
			while (opcion == 1)
			{
				cout << "\nLista de retiros\n" << endl;
				for (int i = 0; i < operaciones[0]; i++) if (retiroCuenta[i] == usu[cuentaDeseada-1].getCuenta()) cout << "Cuenta : " << retiroCuenta[i] << " | Nombre: " << retiroNombres[i] << " | Cantidad: " << retiroMonto[i] << endl;
				cout << "\nLista de depositos\n" << endl;
				for (int i = 0; i < operaciones[1]; i++) if (depositoCuenta[i] == usu[cuentaDeseada - 1].getCuenta()) cout << "Cuenta : " << depositoCuenta[i] << " | Nombre: " << depositoNombres[i] << " | Cantidad: " << depositoMonto[i] << endl;
				cout << "\nLista de transferencias\n" << endl;
				for (int i = 0; i < operaciones[2]; i++) if (transferenciaCuenta[i] == usu[cuentaDeseada - 1].getCuenta()) cout << "Cuenta : " << transferenciaCuenta[i] << " | Nombre: " << transferenciaNombres[i] << " | Cantidad: " << transferenciaMonto[i] << "| Otra cuenta: " << transferenciaOtra[i] << endl;
				opcion++;
			}
			break;

		case 2:
			cout << "Lista de todos los retiros\n" << endl;
			for (int i = 0; i < operaciones[0]; i++) cout << "Cuenta : " << retiroCuenta[i] << " | Nombre: " << retiroNombres[i] << " | Cantidad: " << retiroMonto[i] << endl;
			break;

		case 3:
			cout << "\nLista de todos los depositos\n" << endl;
			for (int i = 0; i < operaciones[1]; i++) cout << "Cuenta : " << depositoCuenta[i] << " | Nombre: " << depositoNombres[i] << " | Cantidad: " << depositoMonto[i] << endl;
			break;

		case 4:
			cout << "Lista de todos los retiros\n" << endl;
			for (int i = 0; i < operaciones[0]; i++) cout << "Cuenta : " << retiroCuenta[i] << " | Nombre: " << retiroNombres[i] << " | Cantidad: " << retiroMonto[i] << endl;
			cout << "\nLista de todos los depositos\n" << endl;
			for (int i = 0; i < operaciones[1]; i++) cout << "Cuenta : " << depositoCuenta[i] << " | Nombre: " << depositoNombres[i] << " | Cantidad: " << depositoMonto[i] << endl;
			cout << "\nLista de todas las transferencias\n" << endl;
			for (int i = 0; i < operaciones[2]; i++) cout << "Cuenta : " << transferenciaCuenta[i] << " | Nombre: " << transferenciaNombres[i] << " | Cantidad: " << transferenciaMonto[i] << " | Otra cuenta: " << transferenciaOtra[i] << endl;
			break;

		case 5:
			cout << "\nTodos los usuarios dentro del banco son:\n" << endl;
			for (int i = 0; i < numCuentas; i++)
			{
				cout << "Nombre: ....................." << usu[i].getNom() << endl;
				cout << "El saldo es de: ............." << usu[i].getSal() << endl;
				cout << "Y su numero de cuenta es: ..." << usu[i].getCuenta() << endl << endl;
			}
			break;

		case 0:
			break;

		default:
			cout << "\nOpcion invalida, porfavor intentelo denuevo\n" << endl;
		}
	}
}

int main()
{
	int opcion = 1, numCuentas = 0, retiroCuenta[n], retiroMonto[n], depositoCuenta[n], depositoMonto[n], transferenciaCuenta[n], transferenciaMonto[n], transferenciaOtra[n];
	int operaciones[3] = {0,0,0};
	string retiroNombres[n], depositoNombres[n], transferenciaNombres[n];
	cuenta usu[n];

	while (opcion != 0)
	{
		cout << "Bienvenido al menu del banco, porfavor introdusca una de las opciones debajo" << endl;
		cout << "\n1.- Crear una nueva cuenta" << endl;
		cout << "2.- Realizar una transaccion" << endl;
		cout << "3.- Reportes" << endl;
		cout << "0.- Salir" << endl;
		cin >> opcion;

		switch (opcion){

		case 1:
			numCuentas = creaCuenta(numCuentas, usu);
			break;

		case 2:
			trans(usu, operaciones, retiroCuenta, retiroMonto, depositoCuenta, depositoMonto, transferenciaCuenta, transferenciaMonto, transferenciaOtra, retiroNombres, depositoNombres, transferenciaNombres);
			break;

		case 3:
			consultas(usu, numCuentas, operaciones, retiroCuenta, retiroMonto, depositoCuenta, depositoMonto, transferenciaCuenta, transferenciaMonto, transferenciaOtra, retiroNombres, depositoNombres, transferenciaNombres);
			break;

		case 0:
			break;

		default:
			cout << "\nOpcion invalida, porfavor intentelo denuevo\n" << endl;
		}
	}
	return 0;

}
//
//  transaccion.cpp
//  Proyecto Final
//
//  Created by Joan Andoni Gonzalez rioz on 29/11/15.
//  Copyright © 2015 Tec CSF. All rights reserved.
//

#include "transaccion.h"

transaccion::transaccion(int saldoI, int cantidadI){
    saldo = saldoI;
    cantidad = cantidadI;
}

int transaccion::retiro(){
	if (cantidad > saldo) {
		cout << "No tiene suficiente dinero" << endl;
		return saldo;
	}
	else
		saldo = saldo - cantidad;
		cout << "\nEste es su nuevo saldo : " << saldo << endl;
	return saldo;
}

int transaccion::deposito(){
    saldo = saldo + cantidad;
	cout << "\nEste es su nuevo saldo : " << saldo << endl;
    return saldo;
}

int transaccion::transCuenta(){
    if (cantidad > saldo) {
        cout << "No tiene suficiente saldo para realizar la transaccion" << endl;
        return saldo;
    }
    else
        saldo = saldo - cantidad;
		cout << "\nEste es su nuevo saldo : " << saldo << endl;    
    return saldo;
}

int transaccion::recibirTrans(int otra){
    otra = otra + cantidad;
    return otra;
}
//
//  transaccion.h
//  Proyecto Final
//
//  Created by Joan Andoni Gonzalez rioz on 29/11/15.
//  Copyright © 2015 Tec CSF. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class transaccion {
private:
    int saldo;
    int cantidad;
public:
    transaccion(int saldoI, int cantidadI);
    int retiro();
	int deposito();
    int transCuenta();
    int recibirTrans(int otra);
};
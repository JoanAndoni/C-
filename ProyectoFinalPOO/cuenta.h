//
//  cuenta.h
//  Proyecto Final
//
//  Created by Joan Andoni Gonzalez rioz on 29/11/15.
//  Copyright © 2015 Tec CSF. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class cuenta{
protected:
	string nombre;
	int saldIni;
	int numCuen;

public:
	cuenta();
	cuenta(string n, int sald, int cuen);
	string getNom();
	void setNom(string nom);
	int getSal();
	void setSal(int sal);
	int getCuenta();
	void setCuenta(int cuen);
};
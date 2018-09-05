//
//  cuenta.cpp
//  Proyecto Final
//
//  Created by Joan Andoni Gonzalez rioz on 29/11/15.
//  Copyright © 2015 Tec CSF. All rights reserved.
//

#include "cuenta.h"

cuenta::cuenta(){

}

cuenta::cuenta(string nom, int sal, int num){
	nombre = nom;
	saldIni = sal;
	numCuen = num;
}

string cuenta::getNom(){
	return nombre;
}

void cuenta::setNom(string n){
	nombre = n;
}

int cuenta::getSal(){
	return saldIni;
}

void cuenta::setSal(int s){
	saldIni = s;
}

int cuenta::getCuenta(){
	return numCuen;
}

void cuenta::setCuenta(int n){
	numCuen = n;
}
/*
 * point.cpp
 *
 *  Created on: 19 juil. 2017
 *      Author: Administrateur
 */

#include "point.h"

point::point() {
	indice = 0;
	valeur = 0;
	temps= 0;
}

int point::getIndice() const {
	return indice;
}

void point::setIndice(int indice) {
	this->indice = indice;
}

double point::getTemps() const {
	return temps;
}

void point::setTemps(double temps) {
	this->temps = temps;
}

double point::getValeur() const {
	return valeur;
}

void point::setValeur(double valeur) {
	this->valeur = valeur;
}

point::~point() {

}


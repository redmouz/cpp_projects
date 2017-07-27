/*
 * point.cpp
 *
 *  Created on: 19 juil. 2017
 *      Author: Administrateur
 */

#include "point.h"

point::point() {
	valeur = 0;
	indice = 0;
	temps= 0;
}

point::point(const point& p_source){
	valeur = p_source.getValeur();
	indice = p_source.getIndice();
	temps = p_source.getTemps();
}

point::point(const double& val, const int& ind, const double& tmps){
	valeur = val;
	indice = ind;
	temps = tmps;
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

point& point::operator=(const point& source){
	if(this == &source)
		return *this;

	valeur = source.getValeur();
	indice = source.getIndice();
	temps = source.getTemps();
	return *this;
}
point::~point() {

}


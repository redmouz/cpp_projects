/*
 * EuropeanOption.cpp
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#include "EuropeanOption.hpp"

EuropeanOption::EuropeanOption() {
	nom = "Option Européenne";
}

EuropeanOption::EuropeanOption(const string& _type, \
		const double& _T, const Asset& _actif,const double& _K) : EuropeanOption(){
	type = _type;
	T = _T;
	actif = _actif;
	if (type == "c")
		payoff = &european_call_option;
	if	(type == "p")
		payoff = &european_put_option;

	K = _K;
}


void EuropeanOption::print() const{
	cout << "Information sur l'option" << endl;
	cout << "[Option]: " << this->getNom() << endl;
	if (type == "c")
		cout << "[Type d'option]: " << "CALL" << endl;
	if (type == "p")
		cout << "[Type d'option]: " << "PUT" << endl;
	cout << "[Maturité]: " << this->getT() << endl;
	cout << "[Strike]: " << this->getK() << endl;
	cout << "[Sous-jacent]: " << this->getActif().getName() << endl;
	cout <<	"[volatilité]: " << this->getActif().getSigma() << endl;
}

EuropeanOption::~EuropeanOption() {
	// TODO Auto-generated destructor stub
}

EuropeanOption::EuropeanOption(const EuropeanOption& op) : Option() {
	type = op.type;
	T = op.T;
	actif = op.actif;
	K = op.K;
	payoff = op.payoff;
}

EuropeanOption& EuropeanOption::operator =(const EuropeanOption& op) {
	if(!(this==&op)){
		type = op.type;
		T = op.T;
		actif = op.actif;
		K = op.K;
		payoff = op.payoff;
	}
	return *this;
}

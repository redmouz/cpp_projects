/*
 * Option.cpp
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#include "Option.hpp"

Option::Option(){
	payoff = NULL;
}

Option::Option(const Option& op){
	nom = op.getNom();
	type = op.getType();
	T = op.getT();
	actif = op.getActif();
	payoff = op.getPayoff();
	K = op.getK();
}

Option& Option::operator =(const Option& op){
	if(!(this==&op)){
		nom = op.getNom();
		type = op.getType();
		T = op.getT();
		actif = op.getActif();
		payoff = op.getPayoff();
		K = op.getK();
	}
	return *this;
}

const Asset& Option::getActif() const {
	return actif;
}

void Option::setActif(const Asset& actif) {
	this->actif = actif;
}


const string& Option::getNom() const {
	return nom;
}

void Option::setNom(const string& nom) {
	this->nom = nom;
}

const string& Option::getType() const {
	return type;
}

void Option::setType(const string& type) {
	this->type = type;
}

double Option::getT() const {
	return T;
}

void Option::setT(const double& t) {
	T = t;
}

double Option::getK() const{
	return K;
}

void Option::setK(const double& _K){
	K = _K;
}

const f_pointer& Option::getPayoff() const{
	return payoff;
}

double Option::payoffs(const double& x){
	return (*payoff)(x,K);
}

Option::~Option(){}

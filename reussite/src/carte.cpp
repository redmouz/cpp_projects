/*
 * carte.cpp
 *
 *  Created on: 16 juil. 2017
 *      Author: redam
 */

#include "carte.h"

carte::carte(){}

carte::carte(const carte& carte){
	valeur = carte.valeur;
	symbole = carte.symbole;
}

carte::carte(const int& valeur, const int& symbole){
	this->valeur = valeur;
	this->symbole = symbole;
}

bool carte::operator==(const carte& carte) const{
	if(carte.symbole == symbole and carte.valeur == valeur){
			return true;
	}
	return false;
}

bool carte::est_identique(const int& symbole, const int& valeur) const{
	if(this->symbole == symbole and this->valeur == valeur){
		return true;
	}
	return false;
}

carte& carte::operator=(const carte& carte){
	if(this == &carte)
		return *this;

	valeur = carte.valeur;
	symbole = carte.symbole;
	return *this;

}

carte::~carte(){}

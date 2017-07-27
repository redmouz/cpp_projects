/*
 * modele.cpp
 *
 *  Created on: 20 juil. 2017
 *      Author: Administrateur
 */

#include "modele.h"
#include "C:\Users\redam\git\frame\src\utils.cpp"

using namespace ut;

modele::modele() {
	drift = 0;
	vol = 0;
	type = "normal";
}


modele::modele(double d,double v,string t){
	drift = d;
	vol = v;
	type = t;
}

double modele::next_value(const double& val,const double& pas_temps) const{
	return val + drift*pas_temps + vol*sqrt(pas_temps)*normalNumber(0,1);
}

modele::~modele() {
	// TODO Auto-generated destructor stub
}


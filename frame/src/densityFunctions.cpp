/*
 * densityFunctions.cpp
 *
 *  Created on: 5 juil. 2017
 *      Author: redam
 */

#include "densityFunctions.h"

using namespace std;

namespace dens {

densityFunctions::densityFunctions() {
	f = NULL;
	minDef = 0;
	maxDef = 0;
}

densityFunctions::densityFunctions(double (*f) (double,double,double), double minDef, double maxDef){
	this->f = f;
	this->minDef = minDef;
	this->maxDef = maxDef;
}

double densityFunctions::get_minDef() const{
	return this->minDef;
}

double densityFunctions::get_maxDef() const{
	return this->maxDef;
}

double densityFunctions::density(double m, double sig, double eval){
	try
	{
		if((minDef != NULL and eval < minDef ) or (maxDef != NULL and eval > maxDef))
		{
			throw string("Le point d'évaluation n'appartient pas au domaine de définition");
			return 0;
		}
		else
		{
			return this->f(m,sig,eval);
		}
	}
	catch(string const& errorMessage)
	{
		cerr << errorMessage << endl;
	}
}

densityFunctions::~densityFunctions() {
}

} /* namespace dens */

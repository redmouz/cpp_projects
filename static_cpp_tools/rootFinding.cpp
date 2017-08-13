/*
 * rootFinding.cpp
 *
 *  Created on: 3 août 2017
 *      Author: Administrateur
 */

#include "rootFinding.hpp"
#include <math.h>

double NRA(Ptf f,const double& a,const double& b,const double& eps, const double& guess){

	double res = guess;


	while(fonc::abs(f(res))>eps){
		res = res - (f)(res)/(cos(res));
	}
	return res;
}

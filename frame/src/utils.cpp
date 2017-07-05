/*
 * utils.cpp
 *
 *  Created on: 5 juil. 2017
 *      Author: redam
 */

#include "utils.h"

namespace ut {

double normalDens(double mean, double sig, double eval){
	double coef = 1/(sqrt(2.0*M_PI)*sig);
	double coef2 = exp(-pow(eval-mean,2)/(2*pow(sig,2)));
	return coef*coef2;
}
double standNormalDens(double eval){
	return normalDens(0,1,eval);
}


} /* namespace ut */

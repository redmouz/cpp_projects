/*
 * utils.cpp
 *
 *  Created on: 5 juil. 2017
 *      Author: redam
 */

#include "utils.h"


namespace ut{

double normalDens(double mean, double sig, double eval){
	double coef = 1/(sqrt(2.0*M_PI)*sig);
	double coef2 = exp(-pow(eval-mean,2)/(2*pow(sig,2)));
	return coef*coef2;
}
double standNormalDens(double eval){
	return normalDens(0.0,1.0,eval);
}

double standNormalCdf(double eval){
	 double const a1 = 0.31938153, a2 = -0.356563782, a3 = 1.781477937;
	 double const a4 = -1.821255978, a5 = 1.330274429;

	double k = 1.0/(1.0 + (0.2316419  * eval));
	double const x = fabs(eval);
	//approximation par un polynome de degré 5 : utilisation de la règle de Horner
	if ( x >= 0.0)
		return 1.0 - standNormalDens(x)*(k*(a1 + k*(a2 +k*(a3 + k*(a4 + k*a5))))); //règle de Horner
	else
		return 1.0 - standNormalCdf(-x);
}

double normalCdf(double mean, double sig, double eval){
	return standNormalCdf((eval-mean)/sig);
}

} // fin du namespace

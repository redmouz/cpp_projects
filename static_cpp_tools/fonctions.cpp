/*
 * fonctions.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "fonctions.hpp"

namespace fonc {

double lngamm(const double& x) {

	double _x,_y,tmp,ser;
	static double cof[6]={76.18009172947146,-86.50532032941677,
			24.01409824083091,-1.231739572450155,
			0.1208650973866179e-2,-0.5395239384953e-5};
	int j;
	_y=_x=x;
	tmp=_x+5.5;
	tmp -= (_x+0.5)*log(tmp);
	ser=1.000000000190015;
	for (j=0;j<=5;j++) {
		ser += cof[j]/++_y;
	}

	return -tmp+log(2.5066282746310005*ser/_x);
}

double fact(unsigned int n){

	static unsigned int ntop=4;
	static float a[33]={1.0,1.0,2.0,6.0,24.0};
	int j;

	if (n > 32)
		return exp(lngamm(n+1.0));


	while (ntop<n) {
		j=ntop++;
	a[ntop]=a[j]*ntop;
	}
	return a[n];
}

// returns ln(n!)
double lnfact(unsigned int n) {

	static float a[101];
	if (n <= 1)
		return 0.0;

	if (n <= 100)
		return a[n] ? a[n] : (a[n]=lngamm(n+1.0));
	else
		return lngamm(n+1.0);
}

double comb(unsigned int k, unsigned int n) {

	return floor(0.5+exp(lnfact(n)-lnfact(k)-lnfact(n-k)));
}

double max_or_0(const double& x) {
	if(x>0)
		return x;
	else
		return 0;
}

double min_or_0(const double& x) {
	if(x<0)
		return x;
	else
		return 0;
}


double abs(const double& x) {
	if(x<0)
		return -x;

	return x;
}

double x_2(const double& x){
	return x*x;
}

double sign(const double& x) {
	if(x>0)
		return 1.0;
	else
		return -1.0;
}


} /* namespace fonc */


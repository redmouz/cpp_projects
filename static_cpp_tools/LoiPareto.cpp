/*
 * LoiPareto.cpp
 *
 *  Created on: 29 juil. 2017
 *      Author: Administrateur
 */

#include "LoiPareto.hpp"

namespace distribution {

LoiPareto::LoiPareto() : DistributionsContinues(){
	v_max = DBL_MAX;
}

LoiPareto::~LoiPareto() {
	// TODO Auto-generated destructor stub
}


LoiPareto::LoiPareto(const double& _x_m, const double& _k){
	x_m = _x_m;
	k = _k;
	v_min = x_m;
}

double LoiPareto::getX_m() const {
	return x_m;
}

void LoiPareto::setX_m(const double& _x_m) {
	x_m = _x_m;
}

double LoiPareto::getK() const {
	return k;
}

void LoiPareto::setK(const double& _k) {
	k = _k;
}

double LoiPareto::E() const {
	if(k <= 1)
		return DBL_MAX;
	else if (k > 1)
		return k*x_m/(k-1);

}

double LoiPareto::V() const {
	if(k <= 2)
		return DBL_MAX;
	else if (k > 2){
		double c1 = (x_m/(k-1))*(x_m/(k-1));
		double c2 = k/(k-2);
		return c1*c2;
	}
}

double LoiPareto::cdf(const double& x) const {
	return 1 - pow(x_m/x,k);
}

double LoiPareto::pdf(const double& x) const {
	return k * pow(x_m,k)/pow(x,k+1);
}

} /* namespace distribution */

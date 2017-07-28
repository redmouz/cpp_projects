/*
 * LoiExponentielle.cpp
 *
 *  Created on: 28 juil. 2017
 *      Author: Administrateur
 */

#include "LoiExponentielle.hpp"

namespace distribution {

LoiExponentielle::LoiExponentielle() : DistributionsContinues() {
	v_min = 0;
	v_max = DBL_MAX;
	lambda = 1;
}

LoiExponentielle::~LoiExponentielle() {
	// TODO Auto-generated destructor stub
}


double LoiExponentielle::getLambda() const {
	return lambda;
}

void LoiExponentielle::setLambda(const double& l) {
	lambda = l;
}


double LoiExponentielle::E() const {
	return 1/lambda;
}

double LoiExponentielle::V() const {
	return 1/(lambda*lambda);
}

double LoiExponentielle::cdf(const double& x) const {
	return 1-exp(-lambda*x);
}

double LoiExponentielle::pdf(const double& x) const {
	return lambda*exp(-lambda*x);
}

} /* namespace distribution */

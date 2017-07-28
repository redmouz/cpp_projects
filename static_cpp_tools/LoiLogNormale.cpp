/*
 * LoiLogNormale.cpp
 *
 *  Created on: 28 juil. 2017
 *      Author: Administrateur
 */

#include "LoiLogNormale.hpp"

namespace distribution {

LoiLogNormale::LoiLogNormale() : DistributionsContinues(){
	v_min = 0;
	v_max = DBL_MAX;
	mean = 0;
	sigma = 1;
}

LoiLogNormale::~LoiLogNormale() {
	// TODO Auto-generated destructor stub
}

double LoiLogNormale::getMean() const {
	return mean;
}

void LoiLogNormale::setMean(const double& m) {
	mean = m;
}

double LoiLogNormale::getSigma() const {
	return sigma;
}

void LoiLogNormale::setSigma(const double& s) {
	sigma = s;
}

double LoiLogNormale::E() const {
	return exp(mean + 0.5*sigma*sigma);
}

double LoiLogNormale::V() const {
	return (exp(sigma*sigma)-1)*exp(2*mean+sigma*sigma);
}

double LoiLogNormale::cdf(const double& x) const {
	return 0.5+0.5*erf((log(x)-mean)/(sigma*sqrt(2)));
}

double LoiLogNormale::pdf(const double& x) const {
	double c1 = 1/(x*sigma*sqrt(2));
	double c2 = exp(-0.5*(log(x)-mean)*(log(x)-mean)/(sigma*sigma));
	return c1*c2;
}



} /* namespace distribution */

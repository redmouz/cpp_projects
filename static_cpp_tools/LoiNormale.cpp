/*
 * LoiNormale.cpp
 *
 *  Created on: 25 juil. 2017
 *      Author: Administrateur
 */

#include "LoiNormale.hpp"

namespace distribution {

LoiNormale::LoiNormale() : DistributionsContinues(){
	mean = 0;
	sigma = 1;
}

LoiNormale::LoiNormale(const double& m, const double& s) : DistributionsContinues(){
	mean = m;
	sigma = s;
}

double LoiNormale::getMean() const {
	return mean;
}

void LoiNormale::setMean(const double& mean) {
	this->mean = mean;
}

double LoiNormale::getSigma() const {
	return sigma;
}

void LoiNormale::setSigma(const double& sigma) {
	this->sigma = sigma;
}

double LoiNormale::E() const{
	return mean;
}

double LoiNormale::V() const{
	return sigma*sigma;
}

double LoiNormale::pdf(const double& x) const{
	double c1 = 1/(sqrt(2*M_PI)*sigma);
	double c2 = exp(-1/2*(x-mean)*(x-mean)/(sigma*sigma));
	return c1*c2;
}

double LoiNormale::cdf(const double& x) const{
	double const a1 = 0.31938153, a2 = -0.356563782, a3 = 1.781477937;
	double const a4 = -1.821255978, a5 = 1.330274429;

	double k = 1.0/(1.0 + (0.2316419  * x));
	double const _x = fabs(x);
	//approximation par un polynome de degré 5 : utilisation de la règle de Horner
	if ( _x >= 0.0)
		return 1.0 - sn_pdf(_x)*(k*(a1 + k*(a2 +k*(a3 + k*(a4 + k*a5))))); //règle de Horner
	else
		return 1.0 - cdf(_x);
}

double LoiNormale::sn_pdf(const double& x) const{
	double c1 = 1/sqrt(2*M_PI);
	double c2 = exp(-1/2*x*x);
	return c1*c2;
}


LoiNormale::~LoiNormale() {
	// TODO Auto-generated destructor stub
}

} /* namespace distribution */

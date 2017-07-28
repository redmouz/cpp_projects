/*
 * LoiUniforme.cpp
 *
 *  Created on: 28 juil. 2017
 *      Author: Administrateur
 */

#include "LoiUniforme.hpp"

namespace distribution {

LoiUniforme::LoiUniforme() : DistributionsContinues(){
	a = 0;
	b = 1;
	v_min = a;
	v_max = b;
}

LoiUniforme::~LoiUniforme() {
	// TODO Auto-generated destructor stub
}

double distribution::LoiUniforme::getA() const {
	return a;
}

void distribution::LoiUniforme::setA(const double& _a) {
	a = _a;
}

double distribution::LoiUniforme::getB() const {
	return b;
}

void distribution::LoiUniforme::setB(const double& _b) {
	b = _b;
}

double distribution::LoiUniforme::E() const {
	return 0.5*(a+b);
}

double distribution::LoiUniforme::V() const {
	return (1/12)*(b-a)*(b-a);
}

double distribution::LoiUniforme::cdf(const double& x) const {

		if(x>=a or x<=b)
			return (x-a)/(b-a);
		else if (x<a)
			return 0;
		else
			return 1;

}

double distribution::LoiUniforme::pdf(const double& x) const {
	if(x<a or x>b)
		return 0;
	else
		return 	1/(b-a);
}

} /* namespace distribution */

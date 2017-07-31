/*
 * BinomialMethodStrategies.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "BinomialMethodStrategies.hpp"

namespace binmeth {

BinomialMethodStrategies::BinomialMethodStrategies() {
	q = 0;
}



/*
double BinomialMethodStrategies::getUp() const {
	return up;
}

*/

BinomialMethodStrategies::~BinomialMethodStrategies() {}

double BinomialMethodStrategies::getUp() const{
	return up;
}

double BinomialMethodStrategies::getDown() const{
	return down;
}

double BinomialMethodStrategies::getP() const{
	return p;
}

void BinomialMethodStrategies::Strategy(){}

} /* namespace binmeth */



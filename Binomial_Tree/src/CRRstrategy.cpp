/*
 * CRRstrategy.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "CRRstrategy.hpp"
#include <iostream>

namespace binmeth {

CRRstrategy::CRRstrategy() {

}

CRRstrategy::CRRstrategy(const double& _r,const double& _delta,const double& _sigma){
	r =_r;
	delta = _delta;
	sigma = _sigma;
	q = 0;
}


void CRRstrategy::Strategy() {
	up = exp((r-0.5*sigma*sigma)*delta + sigma*sqrt(delta));
	down  = exp((r-0.5*sigma*sigma)*delta - sigma*sqrt(delta));
	p = 0.5;
}


CRRstrategy::~CRRstrategy() {
}


} /* namespace binmeth */

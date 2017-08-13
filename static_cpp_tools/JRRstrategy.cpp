/*
 * JRRstrategy.cpp
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#include "JRRstrategy.hpp"

namespace binmeth {

JRRstrategy::JRRstrategy() {
	// TODO Auto-generated constructor stub

}

JRRstrategy::JRRstrategy(const double& _r,const double& _delta,const double& _sigma){
	r =_r;
	delta = _delta;
	sigma = _sigma;
	q = 0;
}

void JRRstrategy::Strategy(){
	up = exp(sigma*sqrt(delta));
	down = exp(-sigma*sqrt(delta));
	p = 0.5 + 0.5*sqrt(delta)*(r-0.5*sigma*sigma)/sigma;
}

JRRstrategy::~JRRstrategy() {

}

} /* namespace binmeth */

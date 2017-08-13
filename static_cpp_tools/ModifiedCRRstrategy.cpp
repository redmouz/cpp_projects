/*
 * ModifiedCRRstrategy.cpp
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#include "ModifiedCRRstrategy.hpp"

namespace binmeth {

ModifiedCRRstrategy::ModifiedCRRstrategy() {
	// TODO Auto-generated constructor stub

}

ModifiedCRRstrategy::ModifiedCRRstrategy(const double& _r,const double& _delta,\
		const double& _sigma){
	r =_r;
	delta = _delta;
	sigma = _sigma;
	q = 0;
}

void ModifiedCRRstrategy::Strategy(){
	double kn = log(65/60)/1000;
	double vn = sigma*sqrt(delta);
	up = exp(kn+vn);
	down = exp(kn-vn);
	p=(exp(r*delta)-down)/(up-down);
}

ModifiedCRRstrategy::~ModifiedCRRstrategy() {

}

} /* namespace binmeth */

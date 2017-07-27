/*
 * CRRstrategy.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "CRRstrategy.hpp"

namespace binmeth {

CRRstrategy::CRRstrategy() {

}

CRRstrategy::CRRstrategy(const double& _u,const double& _d,const double& _p,const double& _r, \
			const double& _delta,const double& _vol,const double& _q = 0){
	up = _u;
	down = _d;
	p = _p;
	r =_r;
	delta = _delta;
	vol = _vol;
	q = _q;
}

CRRstrategy::CRRstrategy(const double& _r,const double& _delta,const double& _vol,\
		const double& _q = 0){
	r =_r;
	delta = _delta;
	vol = _vol;
	q = _q;
}

void CRRstrategy::Strategy() {
	up = exp(vol*sqrt(delta));
	down = exp(-vol*sqrt(delta));
	p =  (exp((r-q)*delta) - down)/(up-down);
}

CRRstrategy::~CRRstrategy() {
}

} /* namespace binmeth */

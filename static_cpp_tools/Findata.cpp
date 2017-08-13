/*
 * data.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "Findata.hpp"

namespace dta {

Findata::Findata(){}

Findata::Findata(const double& _r){
	r = _r;
	vol_market = 0;
	coc = 0;
	inflation = 0;
}

Findata::Findata(const double& _r, const double& _vol) {
	r = _r;
	vol_market = _vol;
	coc = 0;
	inflation = 0;
}

Findata::Findata(const double& _r, const double& _vol, const double& _coc,\
		const double& _inflation) {
	r = _r;
	vol_market = _vol;
	coc = _coc;
	inflation = _inflation;
}

double Findata::getCoc() const {
	return coc;
}

void Findata::setCoc(const double& coc) {
	this->coc = coc;
}

double Findata::getInflation() const {
	return inflation;
}

void Findata::setInflation(const double& inflation) {
	this->inflation = inflation;
}

double Findata::getR() const {
	return r;
}

void Findata::setR(const double& r) {
	this->r = r;
}

double Findata::getVol() const {
	return vol_market;
}

void Findata::setVol(const double& vol) {
	this->vol_market = vol;
}


Findata::~Findata(){}

} /* namespace dta */


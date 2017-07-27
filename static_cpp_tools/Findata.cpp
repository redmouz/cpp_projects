/*
 * data.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "Findata.hpp"

namespace dta {

Findata::Findata(){}

Findata::Findata(double _r, double _coc) {
	r = _r;
	coc = _coc;
	inflation = 0;
}

Findata::Findata(double _r, double _coc, double _inflation) {
	r = _r;
	coc = _coc;
	inflation = _inflation;
}

double Findata::getCoc() const {
	return coc;
}

void Findata::setCoc(double coc) {
	this->coc = coc;
}

double Findata::getInflation() const {
	return inflation;
}

void Findata::setInflation(double inflation) {
	this->inflation = inflation;
}

double Findata::getR() const {
	return r;
}

void Findata::setR(double r) {
	this->r = r;
}

Findata::~Findata(){}

} /* namespace dta */




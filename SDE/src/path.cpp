/*
 * path.cpp
 *
 *  Created on: 19 juil. 2017
 *      Author: Administrateur
 */

#include "path.h"

path::path() {
	point = point();
	chemin = list<point*>();
}

const list<point*>& path::getChemin() const {
	return chemin;
}

void path::setChemin(const list<point*>& chemin) {
	this->chemin = chemin;
}

static double path::getPas() const {
	return pas;
}

void path::setPas(static double pas) {
	this->pas = pas;
}

const point& path::get0() const {
	return S_0;
}

void path::set0(const point& _0) {
	S_0 = _0;
}

path::~path() {
	// TODO Auto-generated destructor stub
}


/*
 * path.cpp
 *
 *  Created on: 19 juil. 2017
 *      Author: Administrateur
 */

#include "path.h"

path::path() {
	S_0 = point();
	chemin = list<point>();
	chemin.push_back(S_0);
	maturity = 0;
	nbr_pas=0;
}

path::path(const point& p, const int& n, const modele& m, const double& T) {
	S_0 = p;
	nbr_pas = n;
	mod = m;
	maturity = T;
}

const list<point>& path::getChemin() const {
	return chemin;
}

void path::setChemin(const list<point>& chemin) {
	this->chemin = chemin;
}


const point& path::get0() const {
	return S_0;
}

void path::set0(const point& _0) {
	S_0 = _0;
}




void path::generate_path(){

	int i = 1;
	list<point>::iterator it;
	it = chemin.begin();
	double pas_temps = maturity/nbr_pas;
	while(i <= nbr_pas){
		double v = mod.next_value((*it).getValeur(),pas_temps);
		point p_point = point(v,i,i*pas_temps);
		chemin.push_back(p_point);
		i++;
		it++;
	}

}

void path::afficher() const{
	list<point>::const_iterator it;
	for(it=chemin.begin();it!=chemin.end();++it){
		cout << (*it).getValeur() << endl;
	}
}


path::~path() {

}


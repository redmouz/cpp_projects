/*
 * path.h
 *
 *  Created on: 19 juil. 2017
 *      Author: Administrateur
 */

#ifndef PATH_H_
#define PATH_H_

#include "point.h"
#include <list>
#include "modele.h"
#include <iostream>

using namespace std;

class path {
public:
	path();
	virtual ~path();

	path(const point&, const int&, const modele&, const double&);

	const list<point>& getChemin() const;
	void setChemin(const list<point>& chemin);
	const point& get0() const;
	void set0(const point& _0);
	void afficher() const;


	double final_value();
	void generate_path();


private:
	point S_0;
	int nbr_pas;
	list<point> chemin;
	modele mod;
	double maturity;
};

#endif /* PATH_H_ */

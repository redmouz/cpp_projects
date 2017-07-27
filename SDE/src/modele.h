/*
 * modele.h
 *
 *  Created on: 20 juil. 2017
 *      Author: Administrateur
 */

#ifndef MODELE_H_
#define MODELE_H_

#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

class modele {
public:
	modele();
	modele(double,double,string t ="normal");
	virtual ~modele();
	double next_value(const double&,const double&) const;
private:
	double drift;
	double vol;
	string type;
};

#endif /* MODELE_H_ */

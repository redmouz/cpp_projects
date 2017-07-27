/*
 * BinomialMethod.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef BINOMIALMETHOD_HPP_
#define BINOMIALMETHOD_HPP_

const int CRR = 1;



#include "toile.hpp"
#include "CRRstrategy.hpp"
#include <Findata.hpp>
#include <string.h>
using namespace std;
using namespace array;
using namespace dta;

namespace binmeth {

class BinomialMethod {
public:

	BinomialMethod(const int&, const double&, const int&, const double&, int, const Findata&);
	void update_arbre();


private:
	toile arbre;
	BinomialMethodStrategies strategie;
	int n_steps;
	int T; //maturité
	double S_0;
	Findata donnees;
	int arbre_type;
	int type_methode;

};

} /* namespace binmeth */

#endif /* BINOMIALMETHOD_HPP_ */

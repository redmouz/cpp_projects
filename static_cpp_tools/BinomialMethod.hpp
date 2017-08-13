/*
 * BinomialMethod.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef BINOMIALMETHOD_HPP_
#define BINOMIALMETHOD_HPP_

const int CRR = 1;	// CRR Method
const int JRR = 2;	// JRR method
const int MCRR = 3; //Modified CRR Method



#include "toile.hpp"
#include "CRRstrategy.hpp"
#include "JRRstrategy.hpp"
#include "ModifiedCRRstrategy.hpp"
#include "Findata.hpp"
#include "fonctions.hpp"
#include "OptionPayoffs.hpp"
#include <string.h>
#include "Option.hpp"

using namespace std;
using namespace array;
using namespace dta;


namespace binmeth {

class BinomialMethod {
public:

	BinomialMethod(const int&, const int& ,const Option*, int, const Findata&);
	void update_arbre();
	vector<double > payoffs();
	void afficher_arbre() const;
	double Price();
	virtual ~BinomialMethod();



private:
	toile arbre;
	BinomialMethodStrategies* strategie;
	int n_steps;
	Option* option;
	Findata donnees;
	int arbre_type; // binomial Trinomial
	int type_methode; // CRR, JRR, Modified CRR

};

} /* namespace binmeth */

#endif /* BINOMIALMETHOD_HPP_ */

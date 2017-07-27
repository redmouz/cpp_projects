/*
 * BinomialMethod.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "BinomialMethod.hpp"


namespace binmeth {



BinomialMethod::BinomialMethod(const int& _n, const double& _T, const int& _type, \
		const double& _S_0, int _arbre_type, const Findata& d){
	n_steps = _n;
	arbre_type = _arbre_type;
	arbre = toile(n_steps,arbre_type);
	T = _n;
	type_methode = _type;
	switch(type_methode){
	case CRR:
		strategie = CRRstrategy();
		break;
	default:
		strategie = CRRstrategy();
		break;
	}
	S_0 = _S_0;
	arbre.set_racine(S_0);
	donnees = d;
}

void BinomialMethod::update_arbre(){

	switch(arbre_type){
	case 2:
		for(int i=1; i<arbre.get_Taille();i++){
			unsigned int k = arbre.get_data()[i].size()-1;
			for(unsigned int j = 0; j<=k; j++){
				//arbre.get_data()[i][j] = (down^j)*(up^(k-j))
			}
		}
	}
}




} /* namespace binmeth */

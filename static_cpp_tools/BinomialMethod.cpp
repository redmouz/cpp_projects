/*
 * BinomialMethod.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "BinomialMethod.hpp"


namespace binmeth {



BinomialMethod::BinomialMethod(const int& _n, const int& _type, \
	const Option* op, int _arbre_type, const Findata& d){
	n_steps = _n+1;
	type_methode = _type;
	option = new Option(*op);
	arbre_type = _arbre_type;
	arbre = toile(n_steps,arbre_type);
	arbre.set_racine(option->getActif().getS());
	double delta = option->getT()/(n_steps-1);
	double sigma = option->getActif().getSigma();


	switch(type_methode){
	case CRR:
		strategie = new CRRstrategy(d.getR(),delta,sigma);
		strategie->Strategy();
		break;
	case JRR:
		strategie = new JRRstrategy(d.getR(),delta,sigma);
		strategie->Strategy();
		break;
	case MCRR:
		strategie = new ModifiedCRRstrategy(d.getR(),delta,sigma);
		strategie->Strategy();
		break;
	default:
		strategie = new CRRstrategy(d.getR(),delta,sigma);
		strategie->Strategy();
		break;
	}

	donnees = d;
}

void BinomialMethod::update_arbre(){
	double u = strategie->getUp();
	double d = strategie->getDown();
	int arbre_taille = arbre.get_Taille();
	double S_0 = arbre(0,0);
	int k;
	switch(arbre_type){

	case 2:
		for(int i=1; i<arbre_taille;i++){
			k = arbre.get_data()[i].size()-1;
			for(int j = 0; j<=k; j++){
				arbre(i,j) = S_0*pow(u,j)*pow(d,k-j);
			}
		}
	}
}

vector<double > BinomialMethod::payoffs() {

	this->update_arbre();
	int t1 = arbre.get_Taille()-1;
	int t2 = arbre.get_data()[t1].size();
	vector<double > payoff(t2);
	for(int i=0;i<t2;i++)
		payoff[i] = option->payoffs(arbre(t1,i));

	return payoff;
}

double BinomialMethod::Price() {

	vector<double > pay(n_steps);
	pay = this->payoffs();

	double res = 0;
	double p = strategie->getP();

	for(int i = 0; i<n_steps; i++)
		res += fonc::comb(i,n_steps-1)*pow(p,i)*pow(1-p,n_steps-1-i)*pay[i];

	double r = donnees.getR();
	double T = option->getT();

	return exp(-r*T)*res;
}

void BinomialMethod::afficher_arbre() const {
	arbre.toile::afficher();
}

BinomialMethod::~BinomialMethod(){
	delete strategie;
	delete option;
}

} /* namespace binmeth */

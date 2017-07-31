/*
 * Option.h
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#ifndef OPTION_HPP_
#define OPTION_HPP_

#include "Asset.hpp"
#include "fonctions.hpp"
#include "OptionPayoffs.hpp"

#include <string>
#include <iostream>
using std::string;
using std::cout;


typedef double (*f_pointer)(const double&,const double&);
class Option {
public:

	Option();
	Option(const Option&);
	virtual ~Option();
	const Asset& getActif() const;
	void setActif(const Asset& actif);
	const string& getNom() const;
	void setNom(const string& nom);
	const string& getType() const;
	void setType(const string& type);
	double getT() const;
	void setT(const double&);
	double getK() const;
	void setK(const double&);
	const f_pointer& getPayoff() const;
	double payoffs(const double&);
	Option& operator=(const Option&);

	virtual void print() const{}

protected:
	string nom;
	string type; // "c" ou "p"
	double T; //maturité
	double K;
	Asset actif; //
	f_pointer payoff;

};

#endif /* OPTION_HPP_ */

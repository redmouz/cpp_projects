/*
 * fonctions.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef FONCTIONS_HPP_
#define FONCTIONS_HPP_

#include <vector>
#include <math.h>
using namespace std;

namespace fonc {


	double fact(unsigned int n);
	double lnfact(unsigned int n);
	double comb(unsigned int k, unsigned int n);
	double max_or_0(const double&);
	double min_or_0(const double&);
	double abs(const double&);
	double x_2(const double&);
	double sign(const double&);

	/*
	*  Fonction spéciale : Logarithme de la fonction Gamma
	*  reférence : Numerical Recipes in C, Second Edition (1992).  William H.Press and al.
	*/

	double lngamm(const double&);


} /* namespace fonc */

#endif /* FONCTIONS_HPP_ */

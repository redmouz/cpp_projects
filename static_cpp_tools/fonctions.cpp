/*
 * fonctions.cpp
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#include "fonctions.hpp"

namespace fonc {

int factorielle(int n){
	if(n == 0 or n == 1)
		return 1;
	else
		return n*factorielle(n-1);
}


int comb(int k, int n){
	int c1 = factorielle(n);
	int c2 = factorielle(k)*factorielle(n-k);
	return c1/c2;
}
} /* namespace fonc */

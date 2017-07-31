/*
 * OptionPayoffs.cpp
 *
 *  Created on: 30 juil. 2017
 *      Author: Administrateur
 */

#include "OptionPayoffs.hpp"

double european_call_option(const double& x, const double& K){
	return fonc::max_or_0(x-K);
}

double european_put_option(const double& x, const double& K){
	return fonc::max_or_0(K-x);
}




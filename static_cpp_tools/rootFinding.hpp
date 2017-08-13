/*
 * rootFinding.hpp
 *
 *  Created on: 3 août 2017
 *      Author: Reda Mouzeyar
 */

#ifndef ROOTFINDING_HPP_
#define ROOTFINDING_HPP_

#include <math.h>
#include "fonctions.hpp"

typedef double (*Ptf)(const double&);
// newton raphson approximation method
//double NRA(double (*f)(const double&),const double&,const double&,const int&);
double NRA(Ptf,const double&,const double&,const double&, const double&);

#endif /* ROOTFINDING_HPP_ */

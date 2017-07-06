/*
 * utils.h
 *
 *  Created on: 5 juil. 2017
 *      Author: redam
 */

#ifndef UTILS_H_
#define UTILS_H_
#define M_PI 3,141592653

#include <math.h>

namespace ut {

// Densité
double normalDens(double mean, double sig, double eval);
double standNormalDens(double eval);

// Fonctions de répartition
double 	standNormalCdf(double eval);
double 	normalCdf(double mean, double sig, double eval);

} /* namespace ut */

#endif /* UTILS_H_ */

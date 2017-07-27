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
#include <stdlib.h>



namespace ut {

// Densité
double normalDens(double mean, double sig, double eval);
double standNormalDens(double eval);

// Fonctions de répartition
double standNormalCdf(double eval);
double normalCdf(double mean, double sig, double eval);

//generer un nombre aléatoire issu de la loi normale

double normalNumber(double mean, double sig);
double W_function(double W);
void Polar_Marsaglia_algo (double&, double&);


} /* namespace ut */

#endif /* UTILS_H_ */

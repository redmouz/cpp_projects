/*
 * BinomialMethodStrategies.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef BINOMIALMETHODSTRATEGIES_HPP_
#define BINOMIALMETHODSTRATEGIES_HPP_

#include <math.h>

namespace binmeth {

class BinomialMethodStrategies {
public:
	BinomialMethodStrategies();
	double getUp() const;
	double getDown() const;
	double getP() const;
	virtual void Strategy() = 0;
	virtual ~BinomialMethodStrategies();




protected:
	double up;
	double down;
	double p;
	double r;
	double delta;
	double sigma;
	double q; //dividende

};

} /* namespace binmeth */

#endif /* BINOMIALMETHODSTRATEGIES_HPP_ */

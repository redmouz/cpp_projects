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
	virtual void Strategy();
	virtual ~BinomialMethodStrategies();

protected:
	double up;
	double down;
	double p;
	double r;
	double delta;
	double vol;
	double q; //dividende

};

} /* namespace binmeth */

#endif /* BINOMIALMETHODSTRATEGIES_HPP_ */

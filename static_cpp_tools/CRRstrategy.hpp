/*
 * CRRstrategy.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef CRRSTRATEGY_HPP_
#define CRRSTRATEGY_HPP_

#include "BinomialMethodStrategies.hpp"
using namespace binmeth;


namespace binmeth {

class CRRstrategy : public BinomialMethodStrategies {
public:
	CRRstrategy();
	void Strategy();
	CRRstrategy(const double&,const double&,const double&);
	virtual ~CRRstrategy();
};

} /* namespace binmeth */

#endif /* CRRSTRATEGY_HPP_ */

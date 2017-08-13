/*
 * JRRstrategy.h
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#ifndef JRRSTRATEGY_HPP_
#define JRRSTRATEGY_HPP_

#include "BinomialMethodStrategies.hpp"

namespace binmeth {

class JRRstrategy : public BinomialMethodStrategies {
public:
	JRRstrategy();
	JRRstrategy(const double&, const double&, const double&);
	void Strategy();
	virtual ~JRRstrategy();
};

} /* namespace binmeth */

#endif /* JRRSTRATEGY_HPP_ */

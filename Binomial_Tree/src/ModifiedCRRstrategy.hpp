/*
 * ModifiedCRRstrategy.h
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#ifndef MODIFIEDCRRSTRATEGY_HPP_
#define MODIFIEDCRRSTRATEGY_HPP_

#include "BinomialMethodStrategies.hpp"

namespace binmeth {

class ModifiedCRRstrategy : public BinomialMethodStrategies{
public:
	ModifiedCRRstrategy();
	ModifiedCRRstrategy(const double&, const double&, const double&);
	void Strategy();
	virtual ~ModifiedCRRstrategy();
};

} /* namespace binmeth */

#endif /* MODIFIEDCRRSTRATEGY_HPP_ */

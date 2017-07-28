/*
 * LoiExponentielle.h
 *
 *  Created on: 28 juil. 2017
 *      Author: Administrateur
 */

#ifndef LOIEXPONENTIELLE_HPP_
#define LOIEXPONENTIELLE_HPP_

#include "DistributionsContinues.hpp"

namespace distribution {

class LoiExponentielle : DistributionsContinues{
public:
	LoiExponentielle();
	double getLambda() const;
	void setLambda(const double&);
	double E() const;
	double V() const;
	double cdf(const double&) const;
	double pdf(const double&) const;
	virtual ~LoiExponentielle();
private:
	double lambda;
};

} /* namespace distribution */

#endif /* LOIEXPONENTIELLE_HPP_ */

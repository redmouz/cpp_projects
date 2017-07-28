/*
 * LoiUniforme.h
 *
 *  Created on: 28 juil. 2017
 *      Author: Administrateur
 */

#ifndef LOIUNIFORME_HPP_
#define LOIUNIFORME_HPP_

#include "DistributionsContinues.hpp"

namespace distribution {

class LoiUniforme : public DistributionsContinues {
public:
	LoiUniforme();
	double getA() const;
	void setA(const double&);
	double getB() const;
	void setB(const double&);
	double E() const;
	double V() const;
	double cdf(const double&) const;
	double pdf(const double&) const;
	virtual ~LoiUniforme();
private:
	double a;
	double b;
};

} /* namespace distribution */

#endif /* LOIUNIFORME_HPP_ */

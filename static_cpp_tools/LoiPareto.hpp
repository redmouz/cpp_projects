/*
 * LoiPareto.h
 *
 *  Created on: 29 juil. 2017
 *      Author: Administrateur
 */

#ifndef LOIPARETO_HPP_
#define LOIPARETO_HPP_

#include "DistributionsContinues.hpp"

namespace distribution {

class LoiPareto : public DistributionsContinues{
public:
	LoiPareto();
	LoiPareto(const double&, const double&);
	double getX_m() const;
	void setX_m(const double&);
	double getK() const;
	void setK(const double&);
	double E() const;
	double V() const;
	double cdf(const double&) const;
	double pdf(const double&) const;
	virtual ~LoiPareto();
private:
	double x_m;
	double k;
};

} /* namespace distribution */

#endif /* LOIPARETO_HPP_ */

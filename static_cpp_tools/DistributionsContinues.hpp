/*
 * DistributionsContinues.h
 *
 *  Created on: 25 juil. 2017
 *      Author: Administrateur
 */

#ifndef DISTRIBUTIONSCONTINUES_HPP_
#define DISTRIBUTIONSCONTINUES_HPP_

#include "Distributions.hpp"

namespace distribution {

class DistributionsContinues : public Distributions {
public:
	DistributionsContinues();
	virtual ~DistributionsContinues();
	virtual double cdf(const double&) const = 0;
	virtual double pdf(const double&) const = 0;
	virtual double E() const = 0;
	virtual double V() const = 0;
	virtual double std() const {
		return sqrt(V());
	}

protected:
	double v_min;
	double v_max;
};

} /* namespace distribution */

#endif /* DISTRIBUTIONSCONTINUES_HPP_ */

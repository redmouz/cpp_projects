/*
 * LoiLogNormale.h
 *
 *  Created on: 28 juil. 2017
 *      Author: Administrateur
 */

#ifndef LOILOGNORMALE_HPP_
#define LOILOGNORMALE_HPP_

#include "DistributionsContinues.hpp"

namespace distribution {

class LoiLogNormale : DistributionsContinues {
public:
	LoiLogNormale();
	virtual ~LoiLogNormale();
	double getMean() const;
	void setMean(const double&);
	double getSigma() const;
	void setSigma(const double&);
	double E() const;
	double V() const;
	double cdf(const double&) const;
	double pdf(const double&) const;


private:
	double mean;
	double sigma;
};

} /* namespace distribution */

#endif /* LOILOGNORMALE_HPP_ */

/*
 * LoiNormale.h
 *
 *  Created on: 25 juil. 2017
 *      Author: Administrateur
 */

#ifndef LOINORMALE_HPP_
#define LOINORMALE_HPP_

#include "DistributionsContinues.hpp"

namespace distribution {

class LoiNormale : public DistributionsContinues{
public:
	LoiNormale();
	LoiNormale(const double&,const double&);
	virtual ~LoiNormale();
	double getMean() const;
	void setMean(double);
	double getSigma() const;
	void setSigma(double);
	double E() const;
	double V() const;
	double cdf(const double&) const;
	double pdf(const double&) const;
	double sn_pdf(const double&) const;

private:
	double mean;
	double sigma;
};

} /* namespace distribution */

#endif /* LOINORMALE_HPP_ */

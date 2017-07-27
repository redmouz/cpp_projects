/*
 * data.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef FINDATA_HPP_
#define FINDATA_HPP_

namespace dta {

class Findata {
public:

	Findata();
	Findata(double, double);
	Findata(double, double, double);
	double getCoc() const;
	void setCoc(double coc);
	double getInflation() const;
	void setInflation(double inflation);
	double getR() const;
	void setR(double r);
	virtual ~Findata();

private:
	double r; //interest rate
	double coc; //cost of carry
	double inflation;
};

} /* namespace dta */

#endif /* FINDATA_HPP_ */

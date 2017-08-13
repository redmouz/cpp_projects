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
	Findata(const double&);
	Findata(const double&, const double&);
	Findata(const double&, const double&,const double&, const double&);
	double getVol() const;
	void setVol(const double&);
	double getCoc() const;
	void setCoc(const double&);
	double getInflation() const;
	void setInflation(const double&);
	double getR() const;
	void setR(const double&);
	virtual ~Findata();

private:
	double r; //interest rate
	double vol_market; // volatility
	double coc; //cost of carry
	double inflation;
};

} /* namespace dta */

#endif /* FINDATA_HPP_ */

/*
 * EuropeanOption.hpp
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#ifndef EUROPEANOPTION_HPP_
#define EUROPEANOPTION_HPP_

#include "Option.hpp"

class EuropeanOption : public Option{
public:
	EuropeanOption();
	EuropeanOption(const string&, const double&, const Asset&, const double&);
	EuropeanOption(const EuropeanOption&);
	EuropeanOption& operator=(const EuropeanOption&);
	//double getK() const;
	//void setK(const double&);
	//double payoff(const double&);
	virtual ~EuropeanOption();
	void print() const;



};

#endif /* EUROPEANOPTION_HPP_ */

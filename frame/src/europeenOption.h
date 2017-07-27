/*
 * europeenOption.h
 *
 *  Created on: 4 juil. 2017
 *      Author: redam
 */

#ifndef EUROPEENOPTION_H_
#define EUROPEENOPTION_H_

#include <stdio.h>
#include <string>

using namespace std;


class europeenOption {
public:
	europeenOption();
	europeenOption(double K, double r, double T, double U, double sig, string optType);
	europeenOption(europeenOption const&);
	double get_K() const;
	double get_r() const;
	double get_T() const;
	double get_U() const;
	double get_sig() const;
	double* get_test() const;
	void set_test(double*);
	string get_optType() const;
	virtual ~europeenOption();

private:
	double K; // strike
	double r; // Interest rate
	double T; // Maturity
	double U; // current price
	double sig; // volatility
	string optType; // option type (Call or Put)
	double *test;

};

#endif /* EUROPEENOPTION_H_ */

/*
 * exactEuropeanOption.h
 *
 *  Created on: 6 juil. 2017
 *      Author: redam
 */

#ifndef EXACTEUROPEANOPTION_H_
#define EXACTEUROPEANOPTION_H_

#include "optionParam.h"
#include "listOptionParam.h"
#include "utils.h"
using namespace opt;
using namespace ut;

class exactEuropeanOption {
public:

	optionParam<string,double> K; // strike
	optionParam<string,double> r; // Interest rate
	optionParam<string,double> T; // Maturity
	optionParam<string,double> U; // current price
	optionParam<string,double> sig; // volatility
	optionParam<string,double> b;


	exactEuropeanOption(){
		r = optionParam<>();
		K = optionParam<>();
		T = optionParam<>();
		U = optionParam<>();
		sig = optionParam<>();
		b = optionParam<>();
		optType = "Option euro";
		optName = "c";

	}

	exactEuropeanOption(const string optType, const \
				string optName){

		r = optionParam<>();
		K = optionParam<>();
		T = optionParam<>();
		U = optionParam<>();
		sig = optionParam<>();
		b = optionParam<>();
		this->optType = optType;
		this->optName = optName;
	}

	exactEuropeanOption(const optionParam<string,double>& r, const optionParam<string,double>& K, \
				const optionParam<string,double>& T, const optionParam<string,double>& U,const \
				optionParam<string,double>& sig,const optionParam<string,double>& b, const string\
				optName, const string optType){
		this->r = r;
		this->K = K;
		this->T = T;
		this->U = U;
		this->sig = sig;
		this->b = b;
		this->optType = optType;
		this->optName = optName;
	}

	exactEuropeanOption(const exactEuropeanOption& opt){
		this->r = opt.r;
		this->K = opt.K;
		this->T = opt.T;
		this->U = opt.U;
		this->sig = opt.sig;
		this->b = opt.b;
		this->optType = opt();
		this->optName = opt.name();
	}

	string operator() () const{
		return optType;
	}

	string name() const{
		return optName;
	}


	listOptionParam<string,double> parameters() const{
		listOptionParam<string,double> result;

		result.add(optionParam<string, double>(r.name(),r()));
		result.add (optionParam<string, double> (sig.name(), sig() ) );
		result.add (optionParam<string, double> (K.name(), K() ) );
		result.add (optionParam<string, double> (T.name(), T() ) );
		result.add (optionParam<string, double> (U.name(), U() ) );
		result.add (optionParam<string, double> (b.name(), b() ) );

		return result;
	}

	listOptionParam<string, double> outputs() const{

		listOptionParam<string, double> result;

		result.add (optionParam<string, double> (string("Option Value"), Price()));

		return result;
	}

	double Price() const{
		double tmp = sig() * sqrt(T());
		double d1 = (log(U()/K())+ (b() + (sig()*sig())*0.5) * T())/ tmp;
		double d2 = d1 - tmp;
		return (U()*exp((b()-r())*T())*standNormalCdf(d1))-(K()*exp(-r()*T())* standNormalCdf(d2));
	}

	~exactEuropeanOption(){}

private:
	string optName;
	string optType;
};

#endif /* EXACTEUROPEANOPTION_H_ */










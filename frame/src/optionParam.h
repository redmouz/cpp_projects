/*
 * optionParam.h
 *
 *  Created on: 6 juil. 2017
 *      Author: redam
 */

#ifndef OPTIONPARAM_H_
#define OPTIONPARAM_H_

#include <stdlib.h>
#include <string>

using namespace std;

template <class Name = string, class Type = double> class optionParam {
public:
	optionParam(){
		t = Type();
		n = Name();
	}
	optionParam(const Name& n, const Type& t){
		this->t = t;
		this->n = n;
	}
	optionParam(const optionParam<Name, Type>& par){
		this->t = par();
		this->n = par.name();
	}



	virtual Type operator () () const{
		return t;
	}
	virtual void operator() (const Type& t){
		this->t = t;
	}

	virtual Name name()const{
		return n;
	}
	virtual void name(const Name& n){
		this->n = n;
	}

	bool operator== (const optionParam<Name,Type>& par){
		if(this == &par)
			return true;
		if(t == par() and n == par.name())
			return true;
		else
			return false;
	}
private:
	Name n;
	Type t;
	optionParam<Name, Type>& operator= (const optionParam<Name, Type>& par){
		if(this == &par)
			return *this;
		t = par();
		n = par.name();
		return *this;
	}
};

#endif /* OPTIONPARAM_H_ */

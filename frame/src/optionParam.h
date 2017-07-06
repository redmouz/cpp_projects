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
	optionParam();
	optionParam(const Name& n, const Type& t);
	optionParam(const optionParam<Name, Type>& par);
	virtual ~optionParam();

	virtual Type operator () () const;
	virtual void operator() (const Type& t);

	virtual Name name()const;
	virtual void name(const Name& n);

	bool operator== (const optionParam<Name,Type>& par);
private:
	Name n;
	Type t;
	optionParam<Name, Type>& operator= (const optionParam<Name, Type>& par);
};

#endif /* OPTIONPARAM_H_ */

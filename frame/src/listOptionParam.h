/*
 * listOptionParam.h
 *
 *  Created on: 7 juil. 2017
 *      Author: redam
 */

#ifndef LISTOPTIONPARAM_H_
#define LISTOPTIONPARAM_H_

#include "optionParam.h"
#include <list>
using namespace opt;


template <class Name, class Type> class listOptionParam {
public:
	listOptionParam(){
		this->n = Name();
		this->lparam = list<optionParam<Name,Type> >();
	}

	listOptionParam(const Name& n){
		this->n = n.name();
		this->lparam = list<optionParam<Name,Type> >();
	}

	listOptionParam(const listOptionParam& l){
		this->n = l();
		this->lparam = l.lopt();
	}

	// selectors

	int count() const{
		return this->lparam.size();
	}

	Name operator() () const{
		return this->n;
	}

	list<optionParam<Name,Type> >& lopt() const{
		return this->lparam;
	}

	// modifiers

	void operator() (const Name& nam){
		this->n = nam;
	}

	optionParam<Name,Type> value(const Name& nam) const{
		typename list<optionParam<Name,Type> >::const_iterator it;

		for(it=this->lparam.begin();it!=this->lparam.end();it++){
			if((*it)() == nam)
				return *it;
		}
		return NULL;

	}

	// iterators

	void add(const optionParam<Name,Type>& p){
		lparam.push_back(p);
	}
	void add(const listOptionParam<Name,Type>& p){
		typename list<optionParam<Name,Type> >::const_iterator it;

		for(it=p.lopt().begin();it!=p.lopt().end();it++){
			add *it;
		}
	}
	void remove(const Name& value);
	// operator =

	optionParam<Name,Type>& operator= (const optionParam<Name,Type>& source){
		if(this == &source)
			return *this;
		n = source();
		lparam = source.lopt();
		return *this;
	}


	virtual ~listOptionParam(){}
private:
	Name n;
	list<optionParam<Name,Type> > lparam;
};

#endif /* LISTOPTIONPARAM_H_ */

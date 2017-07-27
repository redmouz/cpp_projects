/*
 * optionTemplate.h
 *
 *  Created on: 4 juil. 2017
 *      Author: redam
 */

#ifndef OPTIONTEMPLATE_H_
#define OPTIONTEMPLATE_H_

#include <string>
using namespace std;


template <typename valueType> class optionTemplate {
public:
	optionTemplate(){
		K = 0;
		r = 0;
		T = 0;
		U = 0;
		sig = 0;
		optType = "c";
		p=0;
	}

	optionTemplate(valueType K, valueType r, valueType T, valueType U, valueType sig, string optType, int *p){
		this->K = K;
		this->r = r;
		this->T = T;
		this->U = U;
		this->sig = sig;
		this->optType = optType;
		this->p = new int;
		*(this->p) = *p;
	}

	optionTemplate(optionTemplate const& op){
		this->K = op.get_K();
		this->r = op.get_r();
		this->T = op.get_T();
		this->U = op.get_U();
		this->sig = op.get_sig();
		this->optType = op.get_optType();
		this->p = new int;
		*(this->p) = op.get_p();
	}

	valueType get_K() const{
		return K;
	}

	valueType get_r() const{
		return r;
	}

	valueType get_T() const{
		return T;
	}

	valueType get_U() const{
		return U;
	}

	valueType get_sig() const{
		return sig;
	}

	string get_optType() const{
		return optType;
	}

	int* get_p() const{
		return p;
	}

	void set_K(valueType K) {
		this->K = K;
	}

	void set_r(valueType r) {
		this->r = r;
	}

	void set_T(valueType T) {
		this->T = T;
	}

	void set_U(valueType U) {
		this->U = U;
	}

	void set_sig(valueType sig) {
		this->sig = sig;
	}

	void set_opType(string opType) {
		this->optType = opType;
	}

	virtual ~optionTemplate() {
		delete p;
	}


private:
	valueType K;
	valueType r;
	valueType T;
	valueType U;
	valueType sig;
	string optType;
	int *p;
};


//template class optionTemplate<double>;

#endif /* OPTIONTEMPLATE_H_ */

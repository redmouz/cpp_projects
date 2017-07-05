/*
 * europeenOption.cpp
 *
 *  Created on: 4 juil. 2017
 *  Author: Reda Mouzeyar
 */

#include "europeenOption.h"

europeenOption::europeenOption() {
	K = 0;
	r = 0;
	T = 0;
	U = 0;
	sig = 0;
	optType = "c";
	test = 0;
}

europeenOption::europeenOption(double K, double r, double T, double U, double sig, string optType) {

	this->K = K;
	this->r = r;
	this->T = T;
	this->U = U;
	this->sig = sig;
	this->optType = "c";
	this->test = 0;
}

europeenOption::europeenOption(europeenOption const& op) {
	this->K = op.get_K();
	this->r = op.get_r();
	this->T = op.get_T();
	this->U = op.get_U();
	this->sig = op.get_sig();
	this->optType = op.get_optType();
	this->test = new double;
	*(this->test) = *(op.get_test()) ;
}

void europeenOption::set_test(double* hh){
	this->test = new double[100];
	this->test = hh;
}

double* europeenOption::get_test() const {
	return this->test;
}


double europeenOption::get_K() const {
	return this->K;
}

double europeenOption::get_r() const {
	return this->r;
}

double europeenOption::get_T() const {
	return this->T;
}

double europeenOption::get_U() const {
	return this->U;
}

double europeenOption::get_sig() const {
	return this->sig;
}

string europeenOption::get_optType()const {
	return this->optType;
}



europeenOption::~europeenOption() {
	delete[] this->test;
}


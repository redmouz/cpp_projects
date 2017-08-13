/*
 * Asset.cpp
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#include "Asset.hpp"

Asset::Asset() {

}

Asset::~Asset() {
	// TODO Auto-generated destructor stub
}

Asset::Asset(const string& _nom,const double& _sig,const double& _S){
	name = _nom;
	sigma = _sig;
	S = _S;
}

const string& Asset::getName() const {
	return name;
}

void Asset::setName(const string& name) {
	this->name = name;
}

double Asset::getS() const {
	return S;
}

void Asset::setS(const double& s) {
	S = s;
}

double Asset::getSigma() const {
	return sigma;
}

void Asset::setSigma(const double& sigma) {
	this->sigma = sigma;
}

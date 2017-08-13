/*
 * Asset.h
 *
 *  Created on: 31 juil. 2017
 *      Author: Administrateur
 */

#ifndef ASSET_HPP_
#define ASSET_HPP_

#include <string>
using std::string;

class Asset {
public:
	Asset();
	Asset(const string&,const double&,const double&);
	virtual ~Asset();
	const string& getName() const;
	void setName(const string& name);
	double getS() const;
	void setS(const double& s);
	double getSigma() const;
	void setSigma(const double& sigma);

protected:
	string name;
	double sigma;
	double S;
};

#endif /* ASSET_HPP_ */

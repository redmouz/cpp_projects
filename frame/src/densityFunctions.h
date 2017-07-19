/*
 * densityFunctions.h
 *
 *  Created on: 5 juil. 2017
 *      Author: redam
 */

#ifndef DENSITYFUNCTIONS_H_
#define DENSITYFUNCTIONS_H_

#include <stdlib.h>
#include <string>
#include <iostream>


namespace dens {

class densityFunctions {
public:
	densityFunctions();
	densityFunctions(double (*f) (double,double,double), double minDef = 0, double maxDef = 0);
	double density(double,double,double);
	double get_minDef() const;
	double get_maxDef() const;
	virtual ~densityFunctions();

private:
	double (*f) (double,double,double);
	double minDef;
	double maxDef;
};

} /* namespace dens */

#endif /* DENSITYFUNCTIONS_H_ */

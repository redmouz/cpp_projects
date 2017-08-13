/*
 * equations.cpp
 *
 *  Created on: 7 août 2017
 *      Author: Administrateur
 */

#include "equations.hpp"

vector<double > realQuadratic(const double& a,const double& b,const double& c) throw(int) {
	double delta = b*b-4*a*c;
	vector<double > res;

	try {
		if(delta < 0){
			throw 1;
		} else if (delta == 0){
			res = vector<double >(1);
			res[0] = -0.5*b/a;
		} else {
			double q = -0.5*(b + fonc::sign(b)*sqrt(delta));
			res = vector<double >(2);
			res[0] = q/a;
			res[1] = c/q;
		}

	} catch (int){
		cout << "not implemented yet" << endl;
	}
	return res;

}

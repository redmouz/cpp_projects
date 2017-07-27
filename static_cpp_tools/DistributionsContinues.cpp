/*
 * DistributionsContinues.cpp
 *
 *  Created on: 25 juil. 2017
 *      Author: Administrateur
 */

#include "DistributionsContinues.hpp"

namespace distribution {

DistributionsContinues::DistributionsContinues() : Distributions(){
	v_max = DBL_MAX;
	v_min = DBL_MIN;
}

DistributionsContinues::~DistributionsContinues() {
	// TODO Auto-generated destructor stub
}

} /* namespace distribution */

//============================================================================
// Name        : frame.cpp
// Author      : Reda Mouzeyar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "europeenOption.h"
#include "optionTemplate.h"
#include "utils.h"
#include "densityFunctions.h"
#include <iostream>

using namespace std;
using namespace dens;
using namespace ut;



int main(){
	//calcul du prix dune option européènne de strike K et de maturité T

	densityFunctions d1(normalDens,-2,2);
	cout << d1.density(0,3,1);

}

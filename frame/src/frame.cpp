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
#include "listOption.h"



using namespace std;
using namespace dens;
using namespace ut;



int main(){
	//calcul du prix dune option européènne de strike K et de maturité T

	densityFunctions d1(normalDens,-2.0,2.0);
	densityFunctions d2(normalCdf,-2.0,2.0);
	cout << d1.density(0,3.0,1.0) << endl;
	cout << d2.density(2.0,4.0,0) << endl;
	listOption listOpt1;
	europeenOption* opt;
	opt = new europeenOption;
	listOpt1.ajouter_option(opt);
	cout << listOpt1.get_length() << endl;
	delete opt;
	return 0;
}

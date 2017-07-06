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
#include <stdlib.h>
#include <time.h>
#include "optionParam.h"
// pour créer une pause dans l'exécution du programme




using namespace std;
using namespace dens;
using namespace ut;



int main(){

	optionParam<string,double> r;
	r.name(string("coucou"));
	r(0.5);
	cout << r() << endl;
	cout << r.name() << endl;
	return 0;
}

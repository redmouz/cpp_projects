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
#include "exactEuropeanOption.h"
#include "listOptionParam.h"
#include <list>
// pour créer une pause dans l'exécution du programme




using namespace std;
using namespace dens;
using namespace ut;
using namespace opt;


int main(){
	exactEuropeanOption futureOption;
	futureOption.U(105.0);
	futureOption.K(100.0);
	futureOption.T(0.5);
	futureOption.r(0.10);
	futureOption.sig(0.36);
	futureOption.b(0.0);

	listOptionParam<string,double> l = futureOption.outputs();
	list<optionParam<string,double> >::iterator it;

	cout << "\nDump the parameters, call prices ... \n";
	for (it=l.Begin(); it!=l.End(); it++)
	{
		cout << (*it).name() << ", " << (*it)() << endl;
	}




	return 0;
}

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
// pour créer une pause dans l'exécution du programme




using namespace std;
using namespace dens;
using namespace ut;
using namespace opt;


int main(){
	optionParam<> r;
	r(0);
	r.name("r");
	optionParam<> k;
	k(0);
	k.name("k");
	optionParam<> T;
	T(0);
	T.name("T");
	optionParam<> U;
	U(1);
	U.name("U");
	optionParam<> sig;
	sig(0);
	sig.name("sig");
	optionParam<> b;
	b(0);
	b.name("b");
	optionParam<string,string> optType;
	optType("c");
	optType.name("optType");
	exactEuropeanOption opt(r,k,T,U,sig,b,optType);
	cout << opt.Price() << endl;


	return 0;
}

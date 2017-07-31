//============================================================================
// Name        : Binomial_Tree.cpp
// Author      : Reda Mouzeyar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BinomialMethod.hpp"
#include <OptionPayoffs.hpp>
#include "Asset.hpp"
#include "Option.hpp"
#include "EuropeanOption.hpp"


using namespace std;
using namespace array;
using namespace fonc;

int main() {

	Asset action("bnp",0.3,60);
	EuropeanOption* op = new EuropeanOption("c",0.25,action,65);
	Findata data(0.08);
	BinomialMethod bm(1000,JRR,op,2,data);
	cout << "prix est : "<< bm.Price() << endl;
	(*op).print();

	delete op;

	return 0;
}

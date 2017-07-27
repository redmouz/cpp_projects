//============================================================================
// Name        : Binomial_Tree.cpp
// Author      : Reda Mouzeyar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LoiNormale.hpp"
using namespace std;
using namespace distribution;

int main() {
	LoiNormale lN(3,1);
	cout << lN.E() << endl; // prints !!!Hello World!!!
	return 0;
}

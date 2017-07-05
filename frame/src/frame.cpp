//============================================================================
// Name        : frame.cpp
// Author      : Reda Mouzeyar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "europeenOption.h"
#include "optionTemplate.h"
#include <iostream>
using namespace std;



int main(){
	//calcul du prix dune option européènne de strike K et de maturité T
	int *p = 0;
	p = new int;
	*p = 3;
	optionTemplate<double> op1(0.5,0.4,0.6,0.2,0.5,"c",p);
	//op1.set_K(0.5);
	cout << *(op1.get_p()) << endl;
	delete p;
	return 0;
}

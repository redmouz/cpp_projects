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

// pour créer une pause dans l'exécution du programme




using namespace std;
using namespace dens;
using namespace ut;



int main(){
	//calcul du prix dune option européènne de strike K et de maturité T
	cout << "sans initialisation" << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << "avec initialisation NULL" << endl;
	srand(time(NULL));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;

	cout << "seed = 1" << endl;
	srand(1);

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;

	cout << "encore avec initialisation NULL" << endl;
	//usleep(10000000000000000000000000000);
		srand(time(NULL));

		cout << rand() << endl;
		cout << rand() << endl;
		cout << rand() << endl;
		cout << rand() << endl;
	return 0;
}

//============================================================================
// Name        : reussite.cpp
// Author      : Reda Mouzeyar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "jeu.h"
using namespace std;

int main() {

	jeu sim(52);
	sim.init_jeu();
	cout << sim.l.size() << endl;
	sim.afficher_liste();
	return 0;
}

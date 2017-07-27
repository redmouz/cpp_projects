//============================================================================
// Name        : SDE.cpp
// Author      : Reda Mouzeyar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "modele.h"
#include "path.h"
#include <time.h>

using namespace std;

double moyenne(double tab[], int dim){
	double S = 0;
	for(int i=1;i<=dim;i++){
		S += tab[i];
	}
	return S/dim;
}

int main() {
	srand(time(NULL));
	int nsim = 50000;
	double resultat[nsim];
	for(int i = 1;i<=nsim;i++){
		modele mod = modele(0.05,0.02,"normal");
		point S_0;
		path pth(S_0,10,mod,1.0);
		pth.generate_path();
		//pth.afficher();
		resultat[i] = pth.getChemin().back().getValeur();
	}
	cout << moyenne(resultat,nsim) << endl;

	return 0;
}

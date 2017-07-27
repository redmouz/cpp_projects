/*
 * carte.h
 *
 *  Created on: 16 juil. 2017
 *      Author: redam
 */

#ifndef CARTE_H_
#define CARTE_H_

#include <string>


using namespace std;

class carte{
public:

	int valeur;
	int symbole;

	carte();
	carte(const carte&);
	carte(const int&, const int&);
	bool est_identique(const int&, const int&) const;
	bool operator==(const carte&) const;
	carte& operator=(const carte&);
	~carte();

};

#endif /* CARTE_H_ */

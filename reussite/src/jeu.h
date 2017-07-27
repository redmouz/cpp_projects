/*
 * jeu.h
 *
 *  Created on: 16 juil. 2017
 *      Author: redam
 */

#ifndef JEU_H_
#define JEU_H_

#include "carte.h"
#include <list>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

class jeu {
	typedef list<carte*> lst;
	typedef lst::iterator iterator;
	typedef lst::const_iterator iterator_const;
public:
	lst l;
	int nombre;

	jeu();
	jeu(const int&);
	jeu(const lst& );
	void init_jeu();
	bool trouver_carte(const carte&) const;
	bool trouver_carte(const int& symbole, const int& valeur) const;
	static void afficher_liste(const list<carte*>&);
	void afficher_liste() const;
	virtual ~jeu();



};

#endif /* JEU_H_ */

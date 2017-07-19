/*
 * jeu.cpp
 *
 *  Created on: 16 juil. 2017
 *      Author: redam
 */

#include "jeu.h"


jeu::jeu() {}

jeu::jeu(const lst& l){
	nombre = l.size();
	this->l = l;
}

jeu::jeu(const int& nbr){


	nombre = nbr;
	int i=0;
	while(i<nbr){
		l.push_back(new carte);
		i++;
	}
}

bool jeu::trouver_carte(const carte& carte) const{
	iterator_const it;
	for(it = l.begin(); it!=l.end();++it){
		if(*(*it) == carte)
			return true;
	}
	return false;
}

bool jeu::trouver_carte(const int& symbole, const int& valeur) const{
	iterator_const it;
	for(it = l.begin(); it!=l.end();++it){
		if((*it)->symbole == symbole and (*it)->valeur == valeur )
			return true;
	}
	return false;
}


void jeu::init_jeu(){

	if(nombre > 0){

		iterator it = l.begin();
		for(int i = 0; i<13; i++){
			for(int j=0;j<4;j++){
				(*it)->symbole = j;
				(*it)->valeur = i;
				it++;
			}
		}
		srand(time(NULL));
		list<carte*> liste;
		int position;
		it = l.begin();

		while(l.size()!=0){
			position = rand()%l.size();
			advance(it,position);
			liste.splice(liste.begin(),l,it);
			it = l.begin();
		}
		l.splice(it,liste);
		nombre = 52;
	}


}

void jeu::afficher_liste(const list<carte*>& liste) {
	iterator_const it;
	for(it = liste.begin();it != liste.end(); ++it){
		cout << (*it)->symbole << "," << (*it)->valeur << endl;
	}

}

void jeu::afficher_liste() const{
	iterator_const it;
	for(it = l.begin();it != l.end(); ++it){
		cout << (*it)->symbole << "," << (*it)->valeur << endl;
	}
}

jeu::~jeu() {
	iterator it;
	for(it = l.begin(); it != l.end(); ++it){
			delete *it;
	}
	nombre = 0;
}


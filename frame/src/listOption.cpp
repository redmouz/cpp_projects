/*
 * listOption.cpp
 *
 *  Created on: 6 juil. 2017
 *      Author: redam
 */

#include "listOption.h"

listOption::listOption(){
	list<europeenOption*> l;
	listOpt = l;
	length = 0;
}

listOption::listOption(list<europeenOption*> const& listOpt){
	list<europeenOption*> l(listOpt);
	this->listOpt = l;
	this->length = listOpt.size();
}

int listOption::get_length() const{
	return length;
}

list<europeenOption*> listOption::get_list() const{
	return listOpt;
}

//ajout à la fin de la liste
void listOption::ajouter_option(europeenOption* opt){
	listOpt.push_back(opt);
	length += 1;
}


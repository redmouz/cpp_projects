/*
 * listOption.h
 *
 *  Created on: 6 juil. 2017
 *      Author: redam
 */

#ifndef LISTOPTION_H_
#define LISTOPTION_H_

#include <list>
#include <vector>
#include <iostream>
#include "europeenOption.h"
using namespace std;


class listOption {
public:

	listOption();
	listOption(list<europeenOption*> const&);

	int get_length() const;
	list<europeenOption*> get_list() const;

	void ajouter_option(europeenOption* opt);



private:
	list<europeenOption*> listOpt;
	int length;
};

#endif /* LISTOPTION_H_ */

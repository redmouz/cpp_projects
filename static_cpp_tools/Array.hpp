/*
 * Array.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_


#include <vector>
#include <iostream>
using namespace std;

namespace array {

template<class ValueType,class S = vector<ValueType > > class Array {
public:
	Array(){
		taille = 1;
		type = 2;
		data = S(taille);
	}

	Array(const int& t){
		taille = t;
		type = 2;
		data = S(taille);
	}

	Array(const S& d, const int& _type, const int& _taille ){
		type = _type;
		taille = _taille;
		data = d;
	}

	Array(const Array<ValueType,S>& source){
		type = source.type;
		taille = source.taille;
		data = source.data;
	}




	Array<ValueType,S>& operator=(const Array<ValueType,S>& A){
		if(!(this == &A)){
			type = A.type;
			data = A.data;
			taille = A.taille;
		}
		return *this;
	}

	const S& get_data() const{
		return data;
	}

	int get_Taille() const{
		return taille;
	}

	virtual void afficher(){}

	virtual void update(){}


	virtual ~Array(){};


protected:
	S data;
	int type;
	int taille;
};

} /* namespace array */

#endif /* ARRAY_HPP_ */

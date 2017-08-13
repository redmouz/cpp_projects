/*
 * toile.h
 *
 *  Created on: 27 juil. 2017
 *      Author: Administrateur
 */

#ifndef TOILE_HPP_
#define TOILE_HPP_
#include "Array.hpp"

namespace array {

class  toile : public Array<vector<double > > {
public:
	toile() : Array<vector<double > >() {
	}

	toile(const int& _taille, const int& _type) : Array<vector<double > >(_taille){
		type = _type;
		for(int i=0; i<_taille; i++){
			data[i] = vector<double >(i*(type-1)+1);
			for(unsigned int j = 0; j<data[i].size();j++){
				data[i][j] = 0.0;
			}
		}
	}




	void afficher() const{
		for(int i=0; i<taille;i++){
			cout << "[" << i+1 << "]:";
			for(unsigned int j = 0; j< data[i].size(); j++){
				cout << data[i][j] << ";" ;
			}
			cout << endl;
		}
	}

	void set_racine(const double& r){
		data[0][0] = r;
	}

	double operator()(int i,int  j) const{
		return data[i][j];
	}

	double& operator()(int i, int j){
		return data[i][j];
	}

	void assign(const int& i, const vector<double > v){
		if(v.size() == data[i].size()){
			data[i] = v;
		}

	}

	virtual ~toile(){}
private:

};

} /* namespace array */

#endif /* TOILE_HPP_ */

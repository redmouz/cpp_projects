/*
 * point.h
 *
 *  Created on: 19 juil. 2017
 *      Author: Administrateur
 */

#ifndef POINT_H_
#define POINT_H_

class point {
public:
	point();
	virtual ~point();
	point(const point&);
	point(const double&, const int&, const double&);

	int getIndice() const;
	void setIndice(int indice);
	double getTemps() const;
	void setTemps(double temps);
	double getValeur() const;
	void setValeur(double valeur);

	point& operator=(const point&);
private:
	double valeur;
	int indice;
	double temps;
};

#endif /* POINT_H_ */

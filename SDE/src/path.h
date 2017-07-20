/*
 * path.h
 *
 *  Created on: 19 juil. 2017
 *      Author: Administrateur
 */

#ifndef PATH_H_
#define PATH_H_

#include "point.h"
#include <list>

using namespace std;

class path {
public:
	path();
	virtual ~path();

	const list<point*>& getChemin() const;
	void setChemin(const list<point*>& chemin);
	static double getPas() const;
	void setPas(static double pas);
	const point& get0() const;
	void set0(const point& _0);

private:
	point S_0;
	static double pas;
	list<point*> chemin;
};

#endif /* PATH_H_ */

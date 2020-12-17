/*
 * Drink.h
 *
 *  Created on: Apr 25, 2020
 *      Author: keith
 */

//Base class
#ifndef DRINK_H_
#define DRINK_H_
#include <string>

class Drink {
public:
	Drink(){};
	virtual ~Drink(){};
	virtual std::string whatami()=0;
};

#endif /* DRINK_H_ */

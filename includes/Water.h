/*
 * Water.h
 *
 *  Created on: Apr 25, 2020
 *      Author: keith
 */

#ifndef WATER_H_
#define WATER_H_
#include "Drink.h"

class Water:public Drink{
public:
	Water(){};
	virtual ~Water(){};
	virtual std::string whatami(){return(std::string("WATER"));};
};

#endif /* WATER_H_ */

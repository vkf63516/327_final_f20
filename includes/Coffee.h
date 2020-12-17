/*
 * Coffee.h
 *
 *  Created on: Apr 25, 2020
 *      Author: keith
 */

#ifndef COFFEE_H_
#define COFFEE_H_
#include "../includes/Drink.h"

class Coffee:public Drink {
public:
	Coffee(){};
	virtual ~Coffee(){};
	virtual std::string whatami(){return(std::string("Coffee"));};
};

#endif /* COFFEE_H_ */

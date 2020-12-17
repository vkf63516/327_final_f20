/*
 * utilities.h
 *
 *  Created on: Apr 25, 2020
 *      Author: keith
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_
#include <memory>
#include <vector>
#include "DrinkOrder.h"

//TODO add the following orders to the vector myDrinkOrders
//	Will,WATER
//	Allen,COFFEE
//	Barnes,WATER
//	Elly,COFFEE
//	Constance,COFFEE
//	Zane,WATER
//  Liz, NONE
void takeOrders(std::vector<std::unique_ptr<DrinkOrder>> &myDrinkOrders);

#endif /* UTILITIES_H_ */

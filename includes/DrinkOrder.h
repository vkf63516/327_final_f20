/*
 * DrinkOrder.h
 *
 *Be sure to prevent any memory leaks
 *See the TODOs below
 */

#ifndef DRINKORDER_H_
#define DRINKORDER_H_
#include <string>
#include "constants.h"
#include "Drink.h"

//TODO provide below functions
class DrinkOrder {
public:
	//TODO use customerName and CustomerDrink to initialize
	//corresponding member variables, initialize p_drink to null
	DrinkOrder(std::string customerName, Drinktype customerDrink=Drinktype::WATER);

	//TODO cleanup
	virtual ~DrinkOrder();

	//TODO compare by customerName
	bool operator<(const DrinkOrder &rs);

	//TODO returns the name and the Drinktype associated with this order
	//if p_drink is null returns customerName+" gets nothing"
	//otherwise it returns name +" gets " + the whatami() function of the object that p_drink points to
	std::string announceNameAndDrink();

	//TODO allocates a new drink based on customerDrink,
	//use p_drink to point to it.  if customerDrink==NONE then set p_drink to null
	//DO NOT USE ANY IF STATEMENTS IN THIS FUNCTION
	void makeOrder();

private:
	//customer name
	const std::string 	customerName;

	//the drink the customer wants
	Drinktype 			customerDrink;

	//initialized to null, after makeOrder() called points to a new drink
	//or null if customerDrink==NONE
	Drink 				*p_drink;
};

#endif /* DRINKORDER_H_ */

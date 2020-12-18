/*
 * DrinkOrder.cpp
 *
 *  Created on: Apr 25, 2020
 *      Author: Vishal Fenn
 */
#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"
#include "../includes/DrinkOrder.h"
#include "../includes/Water.h"
#include "../includes/Coffee.h"
using namespace std;

DrinkOrder::DrinkOrder(string customerName, Drinktype customerDrink) :
      customerName(customerName),
            customerDrink(customerDrink),
            p_drink(nullptr)
{

}

DrinkOrder::~DrinkOrder() {
   if (p_drink) {
      delete p_drink;
   }
}

bool DrinkOrder::operator<(const DrinkOrder &rs) {
   return customerName < rs.customerName;
}

string DrinkOrder::announceNameAndDrink() {
   if (p_drink == NULL) {
      return customerName + " gets nothing";
   }
   return customerName + " gets " + p_drink->whatami();
}

void DrinkOrder::makeOrder() {
   switch (customerDrink) {
   case NONE:
      p_drink = nullptr;
      break;
   case COFFEE:
      p_drink = new Coffee();
      break;
   case WATER:
      p_drink = new Water();
      break;
   }
}

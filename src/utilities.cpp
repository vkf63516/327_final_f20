/*
 * utilities.cpp
 *
 *  Created on: Apr 25, 2020
 *      Author: Vishal Fenn
 */
#include <iostream>
#include <vector>
#include "../includes/utilities.h"
#include "../includes/DrinkOrder.h"
#include "../includes/constants.h"

using namespace std;

void takeOrders(vector<unique_ptr<DrinkOrder>> &myDrinkOrders) {
   //add the following orders to the vector
   //	Will,WATER
   // Allen,COFFEE
   //   Barnes,WATER
   // Elly,COFFEE
   // Constance,COFFEE
   //   Zane,WATER
   //  Liz, NONE

   myDrinkOrders.push_back(
         std::unique_ptr<DrinkOrder>(new DrinkOrder("Will", WATER)));

   myDrinkOrders.push_back(
         std::unique_ptr<DrinkOrder>(new DrinkOrder("Allen", COFFEE)));

   myDrinkOrders.push_back(
         std::unique_ptr<DrinkOrder>(new DrinkOrder("Barnes", WATER)));

   myDrinkOrders.push_back(
         std::unique_ptr<DrinkOrder>(new DrinkOrder("Elly", COFFEE)));

   myDrinkOrders.push_back(
         std::unique_ptr<DrinkOrder>(new DrinkOrder("Constance", COFFEE)));

   myDrinkOrders.push_back(
         std::unique_ptr<DrinkOrder>(new DrinkOrder("Zane", WATER)));

   myDrinkOrders.push_back(
         std::unique_ptr<DrinkOrder>(new DrinkOrder("LIZ", NONE)));

}

//============================================================================
// Name        : 327_sfinal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//TODO add appropriate includes
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

#include "../includes/DrinkOrder.h"
#include "../includes/utilities.h"

using namespace std;

int total_points=0;
//this is a template class, its mostly here as a helper for me
//the T and U are generic params, I can substitute any type for them
//they must be comparable with ==, templates are extremely hard to get right BTW
template<typename T, typename U>
bool EXPECT_EQ(T expectedVal, U actualVal,string testnumb, int pts){
	bool bout = (expectedVal == actualVal);
	if (bout){
		total_points+=pts;
		cout<<"SUCCESS "+testnumb+ "  total points="<<total_points;

	}
	else
		cout<<"FAIL "+ testnumb<< " Expected:"<<expectedVal<<"  got:"<<actualVal;
	cout<<endl;
	return bout;
}

//used to compare pointers in the vector
//bool comparePtrToNode(DrinkOrder* a, DrinkOrder* b) {
bool comparePtrToNode(std::unique_ptr<DrinkOrder> &a, std::unique_ptr<DrinkOrder> &b) {
	if(!a || !b)
		return false;
	else
		return(*a < *b);
}

int main() {

	DrinkOrder do1(std::string("Keith"), COFFEE);
	EXPECT_EQ (string("Keith gets nothing"), do1.announceNameAndDrink(),"1",15);

	do1.makeOrder();
	EXPECT_EQ (string("Keith gets Coffee"), do1.announceNameAndDrink(),"2",15);

	std::vector<std::unique_ptr<DrinkOrder>> myDrinkOrders;

	//pass the above vector to a function that creates orders
	takeOrders(myDrinkOrders);
	EXPECT_EQ (7, myDrinkOrders.size(),"3",10);

	//the first order should be Will
	EXPECT_EQ (string("Will gets nothing"),myDrinkOrders[0]->announceNameAndDrink(),"4",5);

	//sort the vector by drink type
	std::sort(myDrinkOrders.begin(), myDrinkOrders.end(), comparePtrToNode);

	//now the first order is allen
	EXPECT_EQ (string("Allen gets nothing"),myDrinkOrders[0]->announceNameAndDrink(),"4",5);
}

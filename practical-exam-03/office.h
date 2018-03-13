#ifndef OFFICE_H
#define OFFICE_H 

#include "property.h"
#include <iostream>
#include <string>
using namespace std;


class Office: public Property
{
public:
	int *price;
	int num;



	Office(string s, int n);                              // creates a property of type “office”
                                                     // with area n whose owner is s
Office(string s, int n, int *priceHistory, int m);    // creates a property of type “office” with area n
                                                     // whose owner is s and sets the array of m
                                                     // prices that have been offered in the past;
                                                     // an object should keep the pointer passed in 
                                                     // and not create its own array of integers
void printHistory();                                  // prints the array of prices, one per line, each
                                                     // line contains a price offer then a newline.
                                                     // starting with index 0, then 1, then 2, etc.
void swapOffers(int index1,int index2)  ;             // swaps two elements in the array of prices,
                                                     // i.e. the prices given in position index1 of the
                                                     // array should be placed into position index2,
                                                     // and vice versa
};
#endif
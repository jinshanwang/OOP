#ifndef APARTMENT_H
#define APARTMENT_H 
#include "property.h"
#include <iostream>
#include <string>
using namespace std;



class Apartment : public Property
{
string *P;
int length;

public:
	Apartment(string s, int n);                  // creates a property of type “apartment” 
                                            // with area n whose owner is s
void setFeatures(string *features, int n);   // records an array of n features that an apartment has; 
                                            // an object should keep the pointer passed in 
                                            // and not create its own array of strings 
void printInfo()  ;                          // prints information about an apartment object

};

#endif
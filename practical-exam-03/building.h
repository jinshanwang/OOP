#ifndef BUILDING_H
#define BUILDING_H 
#include "property.h"
#include "office.h"
#include "apartment.h"
#include <iostream>
#include <string>
using namespace std;


class Building
{

	Property **P;
	int L;
public:
	Building(Property ** properties,int n);     // creates a building object containing n properties; 
                                           // an object should keep the pointer passed in and not 
                                           // create its own array of pointers to property objects
void printListOfProperties() ;              // prints the list of properties in this building 
                                           // object, starting with index 0, then 1, 2, 3 etc
                                           // for each property, it prints the owner, a space,
                                           // the type, a space, the ID, then a newline
};
#endif
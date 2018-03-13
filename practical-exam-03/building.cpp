#include "property.h"
#include "office.h"
#include "apartment.h"
#include "building.h"
#include <iostream>
#include <string>
using namespace std;


Building::Building(Property ** properties,int n){

	P = properties;
	L = n;

}     // creates a building object containing n properties; 
                                           // an object should keep the pointer passed in and not 
                                           // create its own array of pointers to property objects
void Building::printListOfProperties(){

	for (int i = 0; i < L; ++i)
	{
		cout<<P[i]->getOwner()<<" "<<P[i]->getType()<<" "<<P[i]->getPropertyID()<<" "<<endl;
	}

}               // prints the list of properties in this building 
                                           // object, starting with index 0, then 1, 2, 3 etc
                                           // for each property, it prints the owner, a space,
                                           // the type, a space, the ID, then a newline
#include "property.h"
#include "apartment.h"
#include <iostream>
#include <string>
using namespace std;


Apartment::Apartment(string s, int n): Property(s,n,"Apartment")// creates a property of type “apartment” 
         {
         	type="Apartment";
         	area=n;
         	owner=s;
         }                                   // with area n whose owner is s
void Apartment::setFeatures(string *features, int n){
	P=features;
	length=n;


}   // records an array of n features that an apartment has; 
                                            // an object should keep the pointer passed in 
                                            // and not create its own array of strings 
void Apartment::printInfo(){

	for (int i = 0; i < length; ++i)
	{
		cout<<P[i]<<endl;
	}
cout<< length<< endl;
}                            // prints information about an apartment object

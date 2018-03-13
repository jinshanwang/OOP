#ifndef PROPERTY_H
#define PROPERTY_H
#include <iostream>
#include <string>
using namespace std;


class Property
{
public:
	static int ID ;
	string owner;
	string type;
	int myID;
	int area;
	Property(string s, int n, string p);   // creates a property of type p of area n and owner s
void setOwner(string s);               // sets the name of the owner of a property to s
string getOwner() ;                    // returns the name of the owner of a property
void setArea(int n) ;                  // sets the area of a property to n; it must not accept negative n
int getArea()    ;                     // returns the area of a property
int getPropertyID() ;                  // returns the unique ID of a property
string getType() ;                     // returns the type of a property

	
};
#endif
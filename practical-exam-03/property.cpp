#include "property.h"
#include <iostream>
#include <string>
using namespace std;
int Property:: ID =0;
Property::Property(string s, int n, string p){
	myID=ID++;
	type=s;
	owner=s;
	area=n;

}   // creates a property of type p of area n and owner s
void Property::setOwner(string s){
	type=s;

}               // sets the name of the owner of a property to s
string Property::getOwner() {
	return owner;
}                    // returns the name of the owner of a property
void Property::setArea(int n){
	area=n;
}                   // sets the area of a property to n; it must not accept negative n
int Property::getArea(){
	return area;
}                         // returns the area of a property
int Property::getPropertyID(){
	return myID;
}                   // returns the unique ID of a property
string Property::getType() {
	return type;
}                     // returns the type of a property

#include "property.h"
#include "apartment.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=2;
	string features[] = {"Built-in Wardrobes", "Broadband Internet"};


	Apartment Joseph("Joseph",100);

	Joseph.setFeatures(features,2);

	Joseph.printInfo();

	return 0;
}
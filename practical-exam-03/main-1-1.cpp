#include "property.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	Property Joseph("Joseph",100,"Apartment");
	Joseph.setOwner("Joseph");
	Joseph.setArea(100);
	Property John("John",100,"Apartment");
	Property P[]={Joseph,John};
	for (int i = 0; i <2; ++i)
	{
		
		

		cout<<"owner: "<<P[i].getOwner()<<" "<<"type: "<<P[i].getType()<<" "<<"area: "<<P[i].getArea()<<" "<<"property ID: "<<P[i].getPropertyID()<<endl;

	}
	return 0;
}
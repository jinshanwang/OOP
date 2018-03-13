#include "property.h"
#include "office.h"
#include "apartment.h"
#include "building.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string A[]={"Owner 1","Owner 2","Owner 3","Owner 4"};

	string B[]={"apartment","office","office","office"};
	int n=4;

	Property **properties;
	properties = new Property*[4];
	for (int i = 0; i < 4; ++i)
	{
		if (i<1)
		{
			properties[i] = new Property(A[i],100,B[i]);
		}
		else 
		{
			/* code */
			properties[i] = new Property(A[i],100,B[i]);
		}
	}

	Building F(properties,n);
	F.printListOfProperties();
	delete properties;
	return 0;
}
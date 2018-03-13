#include "office.h"
#include "property.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int priceHistory[2];

	priceHistory[0]=100;
	priceHistory[1]=200;


	Office Joseph("Joseph",100,priceHistory,2);
	Joseph.printHistory();
	Joseph.swapOffers(0,1);
	Joseph.printHistory();


	return 0;
}

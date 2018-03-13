#include "office.h"
#include "property.h"
#include <iostream>
#include <string>
using namespace std;


Office::Office(string s, int n): Property( s,  n, "Office"){
		type="Office";
		owner=s;
		area=n;

}                            // creates a property of type “office”
                                                     // with area n whose owner is s
Office::Office(string s, int n, int *priceHistory, int m) :Property( s, n, "Office"){
	price=priceHistory;
	type="Office";
		owner=s;
		area=n;
		num=m;



}   // creates a property of type “office” with area n
                                                     // whose owner is s and sets the array of m
                                                     // prices that have been offered in the past;
                                                     // an object should keep the pointer passed in 
                                                     // and not create its own array of integers
void Office::printHistory(){
for (int i = 0; i < num; ++i)
{
	cout<<price[i]<<endl;
}


}                                  // prints the array of prices, one per line, each
                                                     // line contains a price offer then a newline.
                                                     // starting with index 0, then 1, then 2, etc.
void Office::swapOffers(int index1,int index2){

	int temp;
	temp=price[index1];
	price[index1]=price[index2];
	price[index2]=temp;

}               // swaps two elements in the array of prices,
                                                     // i.e. the prices given in position index1 of the
                                                     // array should be placed into position index2,
                                                     // and vice versa
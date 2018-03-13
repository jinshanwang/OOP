#include <iostream>
#include <stdlib.h>
using namespace std;
int *readNumbers(int n){
	int*readNumbers=new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>*(readNumbers+i);

		/* code */
	}
	return readNumbers;
	delete readNumbers;

}
void printNumbers(int *numbers,int length){
	for (int i = 0; i < length; ++i)
	{
		cout<<i<<" "<<*(numbers+i)<<endl;
		/* code */
	}

}
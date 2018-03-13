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
int *reverseArray(int *numbers,int length){

	int *numbers2 =new int[length];
	for (int i = 0; i < length; ++i)
	{
		*(numbers2+i)=*(numbers+length-1-i);
		/* code */
	}
return numbers2;
delete numbers2;





}
void printNumbers(int *numbers,int length){
	for (int i = 0; i < length; ++i)
	{
		cout<<i<<" "<<*(numbers+i)<<endl;
		/* code */
	}

}

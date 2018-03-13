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

void semesterNames(int *semesters,int length){
	for (int i = 0; i < length; ++i)
	{
		/* code */
		switch (*(semesters+i)){
		case 10: cout<<i<<" "<<*(semesters+i)<<" "<<"semester 1"<<endl;
		break;
		case 33: cout<<i<<" "<<*(semesters+i)<<" "<<"trimester 1"<<endl;
		break;
		case 20: cout<<i<<" "<<*(semesters+i)<<" "<<"semester 2"<<endl;
		break;
	}
	}


}
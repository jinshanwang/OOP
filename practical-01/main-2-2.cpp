// program 2-2

#include <iostream>

// definition of binary conversion function
extern int maximum(int array[],int n);

// main program to test the conversion function - ignore args
int main()
{
	// example number to test - 255
	int array[8] = {234,23,43,22,34,55,33,22} ;
    //int array[0]={};
	// display converted number
	std::cout << maximum(array,8) << std::endl ;

	// return 0 to indicate nothing went wrong
	return 0 ;
}

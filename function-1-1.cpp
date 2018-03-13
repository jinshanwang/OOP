
#include <iostream>
#include<stdlib.h>
// function to print 10x10 array of numbers
// 10 numbers per line
// a single space between numbers on a line
// a newline after the last number on a line
void printer(int array[10][10])
{
	for ( int i = 0 ; i < 10 ; i++ )		// 10 rows to write out
	{
		std::cout << array[i][0] ;		// write out row's first number
		for ( int j = 1 ; j < 10 ; j++ )	// write the remaining numbers
		{
				std::cout << " " << array[i][j] ;	// prefix each by a space
		}
		std::cout << std::endl ;		// newline to complete the row
	}
int sum_array(int array[], int n)
{
    int sum=0;
    for(int i=0;i < n;i++){
        sum=sum+array[i];

    }
    if (n<1){
        return 0;
    }
    else{
        return sum;
    }

}

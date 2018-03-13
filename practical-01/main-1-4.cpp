#include <iostream>
#include <stdlib.h>

extern int sumtwo(int array[],int secondarray[],int n);

int main(int argc,char **argv)
{
    int n=5;
    int array[5]={1,2,3,4,5};
    int secondarray[5]={6,7,8,9,10};
    std::cout << sumtwo(array,secondarray,5)<<std::endl;
	return 0 ;
    
}

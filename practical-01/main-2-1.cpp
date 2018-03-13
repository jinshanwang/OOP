#include <iostream>
#include <stdlib.h>

extern int minimum(int array[],int n);

int main(int argc,char **argv)
{
    int array[6]={1,23,21,12,23,45};
    std::cout<< minimum(array,6)<<std::endl;
	
	return 0 ;
}

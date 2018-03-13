#include <iostream>
#include <stdlib.h>
extern int sum_min_and_max(int integer[],int length);
extern int max_integer(int integer[], int length);
extern int  min_integer(int integer[], int length);
int  main(int argc, char const *argv[])
{
	int integer[10] ={12,354,23,56,33,656,33,545,77,443};
	int length=10;
	std::cout<<sum_min_and_max(integer,10)<<std::endl;
	std::cout<<max_integer(integer,10)<<std::endl;
	std::cout<<min_integer(integer,10)<<std::endl;
	

	return 0;
}
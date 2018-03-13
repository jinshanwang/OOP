#include <iostream>
#include <stdlib.h>

void printer(int array[10][10]){

for (int i = 0; i < 10; ++i)
{
	std::cout<<array[i][0];
	
	for (int j = 1; j < 10; ++j)
	{
		std::cout<<" "<<array[i][j];
		
	}
	std::cout<<std::endl;
	

}
}
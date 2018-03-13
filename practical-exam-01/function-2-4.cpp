#include <iostream>
#include <stdlib.h>

int sum_min_and_max(int integer[],int length){
int max =0;
int min =1000;
int sum =0;
if (length<1)
	{
		/* code */
		return -1;
	}
for (int i = 0; i < length; ++i)
{
	
	if (integer[i]>max) // find out the max
	{
		max=integer[i];
	}
	if (integer[i]<min) //find out the min
	{
		min=integer[i];
	}
}
sum =max+min;

return sum;
}



int max_integer(int integer[], int length){

int max =0;
if (length<1)
	{
		/* code */
		return -1;
	}
for (int i = 0; i < length; ++i)
{
	
	if (integer[i]>max) // find out the max
		{
		max=integer[i];
		}

	}
	return max;
}

int min_integer(int integer[], int length){

int min =1000;
if (length<1)
	{
		/* code */
		return -1;
	}
for (int i = 0; i < length; ++i)
{
	
	if (integer[i]<min) // find out the min
		{
		min=integer[i];
		}

	}
	return min;
}
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
extern void cpyda(double * old_array,double * new_array,int length);
int main() {

	/*this is old_array*/
	int length = 3;
	double old_array[3][3]={
            		{1,2,3},
            		{4,5,6},
            		{7,8,9}
          					};



  	double new_array[3][3];/*this is new_array*/

  	cpyda(*old_array,*new_array,length);

  	return 0;
}

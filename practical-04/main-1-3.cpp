#include <iostream>
#include <stdio.h>
#include <stdlib.h>
extern void cpyia(int old_array[],int new_array[],int length);
 int main() {
int length=6;
int old_array[]={12,23,121,66,44,33};
int new_array[6];


  cpyia(old_array,new_array,length);

  return 0;
}

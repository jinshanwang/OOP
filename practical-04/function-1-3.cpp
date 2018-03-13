#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void cpyia(int old_array[],int new_array[],int length){
  int *ptr;
  ptr= &old_array[0];
  for (int i = 0; i < length; i++) {
    /* code */
    new_array[i]= *(ptr+i);

  }

}

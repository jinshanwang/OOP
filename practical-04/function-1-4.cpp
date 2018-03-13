#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
 void cpyda(double* old_array,double *new_array,int length){


for (int i = 0; i < length; i++) {
  /* code */
    for (int j = 0; j < length; j++) {
  /* code */
  if (i+j<2) {
    /* code */
  *(new_array+i+j)=*(old_array+i+j);
  cout << *(new_array+i+j) <<endl;
    }


    }

}
}

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
extern int maximum_sum(int *nums,int length);

int main(int argc, char const *argv[]) {

  int arr[]={-1,2,3,12,1,-13,30,-33};
  
  int length =8;
	
  cout << maximum_sum(arr,length) << '\n'; // maximum_sum(arr,length)
  
  return 0;
}

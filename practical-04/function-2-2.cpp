#include <iostream>
#include <climits>
using namespace std;
int maximum_sum(int *arr,int length){
int max_so_far=0;
int max_ending_here=0;
int *ptr;
ptr=arr;
int Nnums=0;
for (int  i = 0; i < length; i++) {
  /* code */if (*(ptr+i)<0) {
    /* code */Nnums=Nnums+1;
  }

  if (Nnums>=length){
    return 0;
  }
else{

for (int j = 0; j < length; j++) {

  max_ending_here=max_ending_here+*(ptr+j);
  if (max_so_far<max_ending_here) {
  max_so_far=max_ending_here;
  }
  if (max_ending_here<0) {
  max_ending_here=0;
  }
}
return max_so_far;
}
}
}

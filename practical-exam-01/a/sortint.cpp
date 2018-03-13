#include <iostream>

#include "sortint.h"
using namespace std;

   
void SortInt::sort (int *numbers, int n){

     for(int i=0; i<n; i++)                       // sorts the array of n integer numbers
                                                  // in descending order

     {
       for(int j=i+1; j<n; j++)
       {
         if(numbers[j]>numbers[i])
         {
           swap(numbers[i],numbers[j]);
         }
       }
     }
   }

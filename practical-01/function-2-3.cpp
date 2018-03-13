#include <iostream>
#include <stdlib.h>

void twofivenine(int array[], int n){
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for (int i=0; i<n; i++) {
    switch(array[i]){
    case 2:
            sum1++;
            break;
    case 5:
            sum2++;
            break;
    case 9:
            sum3++;
            break;
            
        }
    }
     std::cout << "2:"<<sum1 <<";"<< "5:"<<sum2 <<";"<< "9:"<<sum3 <<std::endl;
     std::cout <<"-------------------"<<std::endl;

}


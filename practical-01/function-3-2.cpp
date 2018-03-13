#include <stdio.h>
int median(int array[], int n){
    int med = 0;
    int min;
    for(int i=0; i<n; i++){
        for(int m=i+1; m<n; m++){
            if(array[i]>array[m]){
                min=array[m];
                array[m]=array[i];
                array[i]=min;
            }
        }
    }
    if(n%2==1){
        med=array[n/2];
    }
    if(n%2==0){
        med=(array[n/2]+array[n/2-1])/2;
    }
    return med;
    
}

#include <iostream>
using namespace std;

int sum_min_and_max(int integers[], int length){
    int sum = 0;
    int f = -1;
    for(int i=0; i<length; i++){
        sum = sum + integers[i];
    }
    if(length > 0){
        return sum;
    }
    else{
        return f;
    }
}

int max_integer(int integers[], int length)
{
    int max = 0;
    int f = 0;
    for (int i=0; i<length; i++){
        if(max < integers[i]){
            max = integers[i];
        }
    }
    if(length > 0){
        return max;
    }
    else{
        return f;
    }
}
int min_integer(int integers[], int length)
{
    int min = 9999;
    int f = 0;
    for (int i=0; i<length; i++){
        if(min > integers[i]){
            min = integers[i];
        }
    }
    if(length > 0){
        return min;
    }
    else{
        return f;
    }
}

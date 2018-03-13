#include <iostream>
using namespace std;

bool is_a_palindrome(int integers[], int length){
    for(int i=0; i<length; i++){
        if(integers[i]==integers[length-1]){
            length = length - 1;
        }
        else{
            return false;
        }
    }
    if(length < 3){
        return true;
    }
    else{
        return false;
    }
    
    
}
int sum_if_a_palindrome(int integers[], int length){
    int sum = 0;
    int f = -2;
    int fa = -1;
    for(int i=0; i<length; i++){
        sum = sum + integers[i];
    }
    if(is_a_palindrome(integers,length)==0){
        return f;
    }
    else if(length == 0){
        return fa;
    }
    else{
        return sum;
    }
}

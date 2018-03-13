#include <iostream>

extern int average_array(int array[],int n);

int main(){
    
    int array[5]={1,2,4,5,7};
    std::cout << average_array(array,5)<<std::endl;
    return 0;
}


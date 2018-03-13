#include <iostream>

extern void print_scaled_matrix(int array[3][3],int scale);

int main(){
    int scale = 3;
    int array[3][3] = {{0,1,2},
        {3,4,5},
        {6,7,8}} ;
    print_scaled_matrix(array,scale) ;
    std::cout << array[0][0]<<" "<<array[0][1]<<" "<<array[0][2]<< std::endl;
    std::cout << array[1][0]<<" "<<array[1][1]<<" "<<array[1][2]<< std::endl;
    std::cout << array[2][0]<<" "<<array[2][1]<<" "<<array[2][2]<< std::endl;
    return 0;
}

#include <iostream>
#include <stdlib.h>

extern int count(int array[],int length,int k);

int main(int argc,char **argv)
{
    int k=2;
    int array[5]={1,2,4,2,2};
    std::cout << count(array,5,k)<<std::endl;
    return 0;
}


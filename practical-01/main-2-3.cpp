#include <iostream>
#include <stdlib.h>
using namespace std;

extern void twofivenine(int array[],int n);

int main(int argc,char **argv)
{
    int array[8]={1,2,3,2,5,6,7,8};
    twofivenine(array,9);
    return 0;
}

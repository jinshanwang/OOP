#include <iostream>
#include <stdio.h>
using namespace std;

extern void print_sevens(int *nums, int length);
int main() {
    int nums[5] = { 1,7,21,28,49 };
    print_sevens(nums,5);
}

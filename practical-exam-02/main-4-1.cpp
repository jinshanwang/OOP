#include <iostream>
#include <stdlib.h>
using namespace std;
extern int *readNumbers(int n);
extern void printNumbers(int *numbers,int length);
extern int *sumSubArrays(int *numbers,int length);
int main(int argc, char const *argv[])
{
	int n=5;
	int length=5;
	int *numbers=readNumbers(n);


	int *numbers2=sumSubArrays(numbers,length);
	printNumbers(numbers2,length);
	return 0;
}

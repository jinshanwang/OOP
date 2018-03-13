#include <iostream>
#include <stdlib.h>
using namespace std;
extern int *readNumbers(int n);
extern int *reverseArray(int *numbers,int length);

extern void printNumbers(int *numbers,int length);
int main(int argc, char const *argv[])
{
	int n=4;
	int length=4;
	int *numbers1=readNumbers(n); 
	int *numbers2=reverseArray(numbers1,length);
	
	printNumbers(numbers2,length);
	return 0;
}
#include <iostream>
#include <stdlib.h>
using namespace std;
extern int *readNumbers(int n);
extern void printNumbers(int *numbers,int length);
int main(int argc, char const *argv[])
{
	int n=10;
	int length=10;
	int *numbers=readNumbers(n);   
	printNumbers(numbers,length);
	return 0;
}
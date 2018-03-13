#include <iostream>
#include <stdlib.h>
using namespace std;
extern int *readNumbers(int n);

extern void semesterNames(int *semesters,int length);
int main(int argc, char const *argv[])
{
	int n=3;
	int length=3;
	int *semesters=readNumbers(n);   
	semesterNames(semesters, length);
	return 0;
}
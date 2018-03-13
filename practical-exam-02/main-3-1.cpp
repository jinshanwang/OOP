#include <iostream>
#include <stdlib.h>
using namespace std;
extern int *readNumbers(int n);

extern bool palindrome(int*numbers,int length);
int main(int argc, char const *argv[])
{
	int n=4;
	int length=4;
	int *numbers=readNumbers(n);   
	
	if(palindrome(numbers,length)==true){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

void print_as_binary(std::string decimal_number)
{
    int decimal;
    std::stringstream ss;
    ss<< decimal_number;
    ss>> decimal;
    int i,j=0;
    int a[100];
    i = decimal;
    while(i){
        a[j] = i % 2;
        i/=2;
        j++;
    }
    for(i=j-1; i>=0; i--){
        std::cout << a[i];
    }
    std::cout << std::endl;
}

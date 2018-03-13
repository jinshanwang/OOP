#include <iostream>
#include <string>
using namespace std;

extern void copy_2d_strings(string first[][2],string second[][2],int n);


int main(){
    const int n=3;
    string first[n][2]={
        "1","2","3","4","5","6"
    };
    string second[n][2];
    copy_2d_strings(first,second,3);
    return 0;
}

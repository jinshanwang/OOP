#include <iostream>

extern int diagonal(int array[4][4]);

using namespace std;

int main()
{
    int array[4][4] = {
        {12, 11, 52, 33} ,
        {49, 53, 63, 77} ,
        {84, 92, 20, 11} ,
        {1, 13, 24, 15},
    };
    cout << diagonal(array) <<std::endl;
    return 0;
}

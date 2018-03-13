#include <iostream>

extern bool is_a_palindrome(int integers[], int length);
extern int sum_if_a_palindrome(int integers[], int length);

using namespace std;

int main()
{  int array[5] = {1,2,0,2,1};
    cout<< is_a_palindrome(array,5) <<endl;
    cout<< sum_if_a_palindrome(array,5) <<endl;
    return 0;
}

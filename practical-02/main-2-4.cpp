#include <iostream>
using namespace std;

extern int sum_min_and_max(int integers[], int length);
extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);

int main()
{   int array[5] ={1,2,3,4,5};
    cout << sum_min_and_max(array,5) << endl;
    cout << max_integer(array,5) << endl;
    cout << min_integer(array,5) << endl;
    return 0;
}

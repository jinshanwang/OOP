extern bool fanarray(int array[], int n);
#include <iostream>
using namespace std;
int main() {
    int array[4]{2,4,4,2};
    //int array[5]{1,2,3,2,1};
    //int array[5]{1,2,1,2,1};
    //int array[5]{1,3,5,4,2};
    cout<<fanarray(array, 4)<<endl;
    return 0;
}

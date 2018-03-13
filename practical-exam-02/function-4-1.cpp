#include <iostream>
#include <stdlib.h>
#include <climits>
using namespace std;
int *readNumbers(int n){
	int*readNumbers=new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>*(readNumbers+i);

		/* code */
	}
	return readNumbers;
	delete readNumbers;

}

	int* sumSubArrays(int *numbers,int length){


	int m=0;   																	////////////////////this is the beginning position in the numbers2
	int subarray_length=0;
	for (int i = length; i >0; i--) {
		/* code */
		subarray_length+=i;												////////get the subarray_length in advanced using forloop;
	}
	int *numbers2  = new int[subarray_length]; ///initialise an new array called numbers2;
	for (int start_index = 0; start_index < length; start_index++) {
		/* code */
			int sum=0;
			for (int subarray_size = 1; subarray_size <= length; subarray_size++) {
			/* code */

				if(subarray_size+start_index>length){
					break;
				}
				sum+=*(numbers+start_index+subarray_size-1);
				*(numbers2+m)=sum;
				++m;

		}

	}

	return numbers2;
}
void printNumbers(int *numbers,int length){
	int subarray_length=0;
	for (int i = length; i >0; i--) {
		/* code */
		subarray_length+=i;

	}

	for (int i = 0; i < subarray_length; ++i)
	{
		cout<<i<<" "<<*(numbers+i)<<endl;
		/* code */
	}

}

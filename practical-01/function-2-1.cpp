// function to ...
int minimum(int array[], int n)
{   int minimum=1000;
    if (n<1) {
        return 0;
    }
    for(int i=0;i<n;i++){
        if (array[i]<minimum) {
            minimum=array[i];
        }
            }
    return minimum;
    

	// your code goes here
}

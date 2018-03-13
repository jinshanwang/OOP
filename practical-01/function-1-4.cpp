int sumtwo(int array[], int secondarray[], int n)
{
    int Sum1=0;
    int Sum2=0;
    int Sum3=0;
    if (n<1){
        return 0;
    }else {
    for(int i=0;i<n;i++){
        Sum1=Sum1+array[i];
        Sum2=Sum2+secondarray[i];
        
    }
        Sum3=Sum1+Sum2;
}
    return Sum3;
}

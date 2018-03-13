int count(int array[], int length, int k)
{
    int l1=0;
    if(length<1){
        return 0;
    }
    for(int i=0;i<length;i++){
        if(array[i]==k){
            l1=l1+1;
        }
    }
 
    return l1;
    
}

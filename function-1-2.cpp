int average_array(int array[], int n)
{
    int average=0;
    int sum=0;
    for(int i=0;i < n;i++){
        sum=sum+array[i];
        
    }
    average=sum/n;
    if (n<1){
        return 0;
    }
    else{
        return average;
    }
    
}


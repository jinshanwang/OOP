// function to ...
int count_even(int number)
{
    int total=0;
    if(number<1){
        return 0;
    }else{
        for(int i=1;i<number;i++){
            if(i%2==0){
                total=total+1;
            }
        }
    }
    return total;
    
}

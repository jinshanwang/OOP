int identity(int array[10][10]){
    int m = 0;
    int t = 1;
    int f = 0;
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
    {
        if((i==j && array[i][j]==1) || (i!=j && array[i][j]==0)){
            m = m + 1;
            }
        
        }
    }
    if(m == 100){
        return t; 
    }
    else{
        return f;
    }
}

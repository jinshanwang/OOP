int maximum(int array[],int n){
    int maximum=0;
    if (n<1) {
        return 0;
    }else{
        for (int i=0; i<n; i++) {
            if (array[i]>maximum) {
                maximum=array[i];
            }
        }
    }
    return maximum;
}

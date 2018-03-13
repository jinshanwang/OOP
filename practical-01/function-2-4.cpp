#include <iostream>
#include <stdlib.h>


void Ascending(int array[],int n){
    int temp;
    int i,j;
    for (j=0;j<=n;j++){
        for(i=0;i<=n;i++){
            if(array[i]>array[i+1])
            {
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        for(i=0;i<n;i++)
        {
            std::cout<<array[i]<<std::endl;
        }
    }
    if(n>0){
        std::cout<<"true"<<std::endl;
    }else if(n<=0){
        std::cout<<"false"<<std::endl;
        
    }
}

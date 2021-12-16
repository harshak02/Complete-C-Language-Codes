#include<stdio.h> 


int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    
    int *ptr = arr;
    
    printf("%d",*ptr);
    

    return 0;
}
//Imp to undrstand that in arrays if we use only *ptr then we get the starting element
//wheras in sstring problems we need to use the whole ptr  instead of *ptr in mailny printf 

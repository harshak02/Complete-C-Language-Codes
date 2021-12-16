#include<stdio.h> 
// code to print size of int double float char->

int main(){
    
    printf("The size of the int is %d\n",sizeof(int));
    printf("The size of the char is %lu\n",sizeof(char));
    printf("The size of the float is %d\n",sizeof(float));
    printf("The size of the double is %d\n",sizeof(double));
    return 0;
}
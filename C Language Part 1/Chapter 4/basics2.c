#include<stdio.h> 

int main(){
    int i;
    i=0;
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d \n",i);
        }
        i++; // this i++ should be written at last of the code
               
    }
    return 0;
}
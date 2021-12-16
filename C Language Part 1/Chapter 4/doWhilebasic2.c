#include<stdio.h> 

int main(){
    int i;
    i=0;
    do{
        printf("The natural numbers from 1 to 100 is %d \n",i+1);
        i++;
        if(i==50){
            break;
        }

    }while(i<100);
    
    return 0;
}
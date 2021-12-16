#include<stdio.h> 

int main(){
    int i;
    i=0;
    int sum;
    sum=0;
    for(i=0;i<=80;i+=8){
        sum +=i;
        
    }
    printf("The sum is %d",sum);

    return 0;
}
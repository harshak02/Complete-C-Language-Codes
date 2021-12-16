#include<stdio.h> 

int main(){
    int a;
    a=0;
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    for(a=0;a<n;a++){
        printf("The natural numbers between 0 and n is %d \n",a+1);
    }
    return 0;
}
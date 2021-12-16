#include<stdio.h> 

int main(){
    int n;
    int factorial;
    factorial=1;

    printf("The value of n is \n");
    scanf("%d",&n);

    for(int a=1;a<=n;a++){
        factorial *=a;

    }

    printf("The value of the %d factorial is %d",n,factorial);
    return 0;
}

#include<stdio.h> 

int main(){
    int c;
    int k=32;
    float p=1.8;
    printf("Enter the value of the Celsius temparature c \n");
    scanf("%d",&c);

    printf("The value of temperature in farenheit is f %f",p*c+k);
    return 0;
}
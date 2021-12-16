#include<stdio.h>

void sumavg(int a,int b,int *ptr1,float *ptr2){

    *ptr1 = a+b;
    *ptr2 =(float)(*ptr1)/2;
}

int main(){

    int a = 3;
    int b = 4;
    int sum;
    int *ptr1 = &sum;
    float avg;
    float *ptr2 = &avg;

    sumavg(a,b,ptr1,ptr2);

    printf("The value of the sum of two numbers is %d \n",sum);
    printf("The value of the avg of two numbers is %.2f \n",avg);
    
    return 0;
}
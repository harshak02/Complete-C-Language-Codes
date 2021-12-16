#include<stdio.h> 

int main(){
    // i++ means first print and then increment
    // ++i means first increment and then print
    int a;
    a=5;
    printf("The value of ++a is %d \n",++a);
    printf("The value of a++ is %d \n",a++);
    printf("The value of a is %d \n",a);
    return 0;
}
//+= is used to increaase the value by that specific number

//if we use in the increment or decrement operators in the printf statement
// then be very particular and the definations work out exactly;
// or if used in some loops then it can be like as of we are doing now;
#include<stdio.h>
// void swap(int *a, int *b){
//     int temp;
//     temp= *a;
//     *a = *b;
//     *b = temp;
// }

// void swap(int a, int b){
//     int temp;
//     temp= a;
//     a = b;
//     b = temp;
// }

int main(){
    int a=4;
    // int *ptr1 =&a ;
    int b=5;
    // int *ptr2 =&b ;
    printf("The value of a and b is %d and %d\n",a,b);

    int temp;
    temp= a;
    a = b;
    b = temp;
    // swap(a,b);
    // swap(ptr1,ptr2);
    printf("The value of a and b is %d and %d\n",a,b);

    return 0;
}
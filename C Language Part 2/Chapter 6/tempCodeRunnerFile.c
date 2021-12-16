#include<stdio.h> 

void swap(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void wrongSwap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 4;
    int *ptr1 = &a;
    int b = 5;
    int *ptr2 = &b;
    printf("The value of a and b is before swapping is %d and %d\n",a,b);
    swap(ptr1,ptr2);
    printf("The value of a and b is after swapping is : %d and %d\n",a,b);
    wrongSwap(a,b);
    printf("The value of a and b is after wrong swapping is : %d and %d\n",a,b);

    return 0;
}

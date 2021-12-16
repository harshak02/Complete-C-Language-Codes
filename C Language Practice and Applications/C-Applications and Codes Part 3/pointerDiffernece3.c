#include<stdio.h> 

int main(){
    int num1 = 6;

    int *ptr1 = &num1;
    int *ptr2;
    ptr2 = ptr1++;

    char num2 = 7;

    char *ptr3 = &num2;
    char *ptr4;
    ptr4 = ptr3++;

    printf("%d\n",ptr1-ptr2);
    printf("%d\n",ptr3-ptr4);

    return 0;
}

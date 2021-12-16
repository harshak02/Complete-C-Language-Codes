#include<stdio.h>

int main(){
    int i = 345;
    int *ptr;
    int **ptr_ptr;
    int **ptr1 = &ptr;

    ptr = &i;
    ptr_ptr= &ptr;

    printf("The value of i is %d\n", **ptr_ptr);
    printf("The value of i is %d", **ptr1);
    return 0;
}

// int *ptr = &a;

// int a;
// int *ptr;
// ptr = &a; 
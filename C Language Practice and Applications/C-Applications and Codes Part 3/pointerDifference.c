#include<stdio.h> 

int main(){
    int num1 = 6;
    int *ptr1 = &num1;
    int *ptr2;
    ptr2 = ptr1++;

    printf("%u\n",ptr1);
    printf("%u\n",ptr2);
    printf("%d",ptr1-ptr2);
    return 0;
}

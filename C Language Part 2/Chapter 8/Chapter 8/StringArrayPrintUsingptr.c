#include<stdio.h>

void lexi(char *ptr){
    printf("The value of element is %s\n",ptr);
}

int main(){

    char arr[3][100];

    char *ptr1 = arr[0];
    char *ptr2 = arr[1];
    char *ptr3 = arr[2];

    printf("Enter the value of 1st string\n");
    scanf("%s",ptr1);
    printf("Enter the value of 2nd string\n");
    scanf("%s",ptr2);
    printf("Enter the value of 3rd string\n");
    scanf("%s",ptr3);


    lexi(ptr1);
    lexi(ptr2);
    lexi(ptr3);

    return 0;
}


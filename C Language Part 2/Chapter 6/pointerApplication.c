#include<stdio.h>

int main(){
    int a =6;
    int *ptr = &a;
    printf("The value of a is %d \n",a);
    *ptr = 10*a;
    printf("The value of a is %d \n",a);

    return 0;
}

#include<stdio.h> 
#include<math.h>

void update(int *ptr1,int *ptr2){
    int add;
    int sub;

    add = *ptr1+*ptr2;
    sub = abs(*ptr1-*ptr2);

    *ptr1 = add;
    *ptr2 = sub;
}

int main(){
    int a;
    int b;

    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    update(ptr1,ptr2);

    printf("The a is %d\n",a);
    printf("The b is %d\n",b);

    return 0;
}


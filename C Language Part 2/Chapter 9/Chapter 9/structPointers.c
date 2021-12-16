#include<stdio.h> 

typedef struct complex{
    int real;
    int imag;
}comp;

int main(){

    comp comp1;
    comp *ptr1 = &comp1;

    printf("the real part of the complex number is :\n");
    scanf("%d",&((*ptr1).real));

    printf("the complex part of the complex number is :\n");
    scanf("%d",&(ptr1->imag));

    printf("the real part of the complex number is :%d\n",ptr1->real);
    printf("the complex part of the complex number is :%d\n",ptr1->imag);

    return 0;
}

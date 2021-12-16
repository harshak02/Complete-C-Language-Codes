#include<stdio.h> 

typedef struct complex{
    int real;
    int imag;
}comp;


int main(){

    comp cnums[10];
    comp *ptr = &cnums[10];//very very very very very very important

    for(int i =0;i<10;i++){
        printf("Enter the %d complex number's real part\n",i+1);
        scanf("%d",&((*(ptr+i)).real));
    }

    for(int i =0;i<10;i++){
        printf("Enter the %d complex number's real part is %d\n",i+1,(ptr+i)->real);
    }

    return 0;
}
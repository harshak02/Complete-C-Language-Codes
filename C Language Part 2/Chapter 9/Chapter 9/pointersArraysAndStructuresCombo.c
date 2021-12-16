#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp; 

void display(comp *ptr){

    for(int i =0;i<5;i++){
        printf("The real value of the complex number %d is %d\n",i+1,(*(ptr+i)).real);
        printf("The imaginary value of the complex number %d is %d\n",i+1,(*(ptr+i)).complex);
    }


}

int main(){
    comp cnums[5];
    comp *ptr = cnums;

    for(int i=0;i<5;i++){
        printf("Enter the value of x argument of %d th complex number \n",(i+1));
        scanf("%d",&(*(ptr+i)).real);
        // we need to use the syntax like this 

        printf("Enter the value of y argument of %d th complex number \n",(i+1));
        scanf("%d",&(*(ptr+i)).complex);

    }

    display(ptr);

    return 0;
}


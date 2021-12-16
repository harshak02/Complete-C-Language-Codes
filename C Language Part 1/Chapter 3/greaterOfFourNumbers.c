#include<stdio.h> 

int main(){
    int a,b,c,d;
    printf("Enter the number a\n");
    scanf("%d",&a);

    printf("Enter the number b\n");
    scanf("%d",&b);

    printf("Enter the number c\n");
    scanf("%d",&c);

    printf("Enter the number d\n");
    scanf("%d",&d);


    if((a>b) && (a>c) && (a>d)){
        printf("a is the greatest number and it is %d \n",a);
    }

    else if((b>a) && (b>c) && (b>d)){
        printf("b is the greatest number and it is %d \n",b);
    }

    else if((c>a) && (c>b) && (c>d)){
        printf("c is the greatest number and it is %d \n",c);

    }

    else{
        printf("d is the greatest number and it is %d \n",d);

    }
    return 0;
}
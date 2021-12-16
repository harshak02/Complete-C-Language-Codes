#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of the lenght a \n");
    scanf("%d",&a);

    printf("Enter the value of the breadth b \n");
    scanf("%d",&b);

    /* We know that the area of the rectangle l*b
    and the perimeter of the rectangle is 2*(l+b) */

    printf("The area of the rectangle is %d \n",a*b);
    printf("The perimeter of the rectangle is %d",2*(a+b));
    return 0; 
}

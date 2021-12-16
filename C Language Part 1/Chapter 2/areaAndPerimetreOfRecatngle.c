#include<stdio.h>

int main(){
    int lenght;
    int breadth;
    printf("Enter the value of lenght l is \n");
    scanf("%d",&lenght);

    printf("Enter the value of breadth b is \n");
    scanf("%d",&breadth);
    
    printf("The area of the rectangle is %d \n",lenght*breadth);
    printf("The perimeter of the rectangle is %d",2*(lenght*breadth));
    return 0;
}


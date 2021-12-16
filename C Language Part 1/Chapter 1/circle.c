#include<stdio.h>

int main(){
    int r;
    float pi=3.14;
    // This code is used for finding the perimeter and the area of circle
    printf("Enter the value of the radius r \n");
    scanf("%d", &r);

    printf("The area of circle is %f \n", pi*r*r);
    printf("The permiter of the given circle is %f", 2*pi*r);
    return 0;
}
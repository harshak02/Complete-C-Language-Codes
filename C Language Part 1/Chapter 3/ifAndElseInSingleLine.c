#include<stdio.h> 

int main(){
    int n;

    printf("Enter the number \n");
    scanf("%d",&n);

    // if and else in a single line syntax;
    (n%2==0) ? printf("The number is even") : printf("The number is odd");

    return 0;
}

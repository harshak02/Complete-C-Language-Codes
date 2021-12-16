#include<stdio.h> 

int main(){
    int l;
    int b;
    int ar;
    int per;

    printf("Enter the lenght :\n");
    scanf("%d",&l);

    printf("Enter the lenght :\n");
    scanf("%d",&b);

    ar = l*b;
    per = 2*(l+b);

    printf("The area of rectangle is : %d\n",ar);
    printf("The perimeter of rectangle is : %d\n",per);

    return 0;
}

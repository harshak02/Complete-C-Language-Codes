#include<stdio.h> 

int main(){
    int a;
    printf("Enter the value of a \n");
    scanf("%d",&a);

    if(a%2==0){
        printf("The number is even number %d",a);

    }
    else{
        printf("The number is odd number %d",a);

    }
// If we use the %d at starting in printf then we get like that no. is even number, if %d is used at last we get the number is even number but
//the number is not mentioned....
//in simple words %d is the entered number
    return 0;
}
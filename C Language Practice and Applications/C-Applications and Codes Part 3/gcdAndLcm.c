#include<stdio.h> 

int main(){
    int num1;
    int num2;
    int gcd = 1;
    int lcm;

    printf("Enter the value of number 1\n");
    scanf("%d",&num1);

    printf("Enter the value of number 2\n");
    scanf("%d",&num2);

    for(int i = 1;i<=num1;i++){
        if((num1%i)==0){
            if(num2%i==0){
                gcd = i;
            }
        }
    }

    lcm = (num1*num2)/gcd;
    

    printf("The gcd of the numbers %d and %d is %d\n",num1,num2,gcd);
    printf("The lcm of the numbers %d and %d is %d\n",num1,num2,lcm);

    return 0;
}

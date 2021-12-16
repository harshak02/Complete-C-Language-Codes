#include<stdio.h>

void multiply(int mul[20],int k){

    for(int i =0;i<20;i++){
        mul[i] = k*(i+1);
    }
}

int main(){
    
    int mul[20];//[20] is ntng but its a quantity so therefore we need to
    //avoid using it in all steps;only use in the first step of any
    //function like main function and void function
    // int mul[3][20]; here 3 is the quality factor we need to use in 
    //each and every step
    //same logic appears in strings
    int n;

    printf("Enter the number n :\n");
    scanf("%d",&n);

    multiply(mul,n);

    for(int i =0;i<20;i++){
        printf("%d X %d = %d\n",n,(i+1),mul[i]);
    }

    return 0;
}

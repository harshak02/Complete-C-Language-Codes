#include<stdio.h>

void printpattern(int k); 

int main(){
    int n;

    printf("Enter the value of num \n");
    scanf("%d",&n);

    printpattern(n);

    return 0;
}

void printpattern(int k){

    for(int i =1;i<=k;i++){
        for(int j=1;j<=((2*k)-((2*i)-1));j++){
            printf("*");
        }

        printf("\n");
    }

    printf("\n");

    for(int i =k;i>0;i--){
        for(int j=1;j<=((2*k)-((2*(i))-1));j++){
            printf("*");
        }

        printf("\n");
    }

    
}


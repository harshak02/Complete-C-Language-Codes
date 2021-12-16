#include<stdio.h>

// int sum(int k);//this declaration is also crct

int sum(int k){
    int result;

    if(k==1){
        result = 1;
    }

    else{
        result = sum(k-1)+ k;
    }
    return result;
}

int main(){
    int n;
    int result;

    printf("Enter the number n \n");
    scanf("%d",&n);

    result = sum(n);

    printf("The sum of %d natural numbers is %d \n",n,result);

    return 0;
}



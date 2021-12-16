#include<stdio.h>
int fib(int a); 

int main(){
    int a,result;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    result = fib(a);
    printf("the nth term in the fib series id %d",result);
    
    return 0;
}

int fib(int a){
    int result;
    if(a==1){
        result  = 0;
        return result;

    }

    if(a==2){
        result = 1;
        return result;
    }

    else{
        result = fib(a-2)+fib(a-1);
        return result;
    }
}
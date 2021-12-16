#include<stdio.h>
int sum(int a, int b); 

int main(){
    int result;
    result = sum(2,7);
    printf("The sum of a and b is %d",result);
    return 0;
}

int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}

#include<stdio.h>

void multiply(int *ptr,int k){

    for(int i =0;i<20;i++){
        *(ptr+i) = k*(i+1);
    }
}

int main(){
    
    int mul[20];
    int *ptr = mul;
    int n;

    printf("Enter the number n :\n");
    scanf("%d",&n);

    multiply(ptr,n);

    for(int i =0;i<20;i++){
        printf("%d X %d = %d\n",n,(i+1),mul[i]);
    }

    return 0;
}

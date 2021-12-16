#include<stdio.h>

void multiplication(int *ptr,int m,int n){// we are treating as single array

    for(int i =0;i<n;i++){
        *(ptr+i) = (i+1)*(m);
    }

    for(int k=0;k<10;k++){
        printf("%d X %d = %d\n",m,(k+1),*(ptr+k));
    }

    printf("\n*****************\n");
}


int main(){
    
    int mul[3][10];
    int *ptr1 = mul[0];
    int *ptr2 = mul[1];
    int *ptr3 = mul[2];

    multiplication(ptr1,2,10);
    multiplication(ptr2,7,10);
    multiplication(ptr3,9,10);

    return 0;
}

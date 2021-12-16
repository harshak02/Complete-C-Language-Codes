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
    int *ptr = *mul;// temporary pointer

    multiplication(ptr,2,10);
    multiplication(ptr,7,10);
    multiplication(ptr,9,10);

    return 0;
}

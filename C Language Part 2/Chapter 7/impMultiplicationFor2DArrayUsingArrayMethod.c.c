#include<stdio.h>

void multiplication(int mul[],int m,int n){//this makes the difference for the 1D and 2d array

    for(int i =0;i<n;i++){
        mul[i] = (i+1)*(m);
    }

    for(int k=0;k<10;k++){
        printf("%d X %d = %d\n",m,(k+1),mul[k]);
    }

    printf("\n*****************\n");
}


int main(){
    
    int mul[3][10];
    // int *ptr = *mul;// temporary pointer

    multiplication(mul[0],2,10);
    multiplication(mul[1],7,10);
    multiplication(mul[2],9,10);

    return 0;

}

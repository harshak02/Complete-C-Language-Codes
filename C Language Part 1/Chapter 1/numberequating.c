#include<stdio.h> 

int main(){
    int n;
    int p;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int j = 1;

    while(j<n){
        p = 1+j;
        j++;
    }

    printf("%d",p);
    return 0;
}

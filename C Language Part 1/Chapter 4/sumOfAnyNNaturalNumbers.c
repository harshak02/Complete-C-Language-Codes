#include<stdio.h> 

int main(){
    int n;
    int sum =0;

    printf("Enter the value of n numbers \n");
    scanf("%d",&n);

    for(int i =0;i<n;i++){
        int k;
        printf("Enter the %d number is \n",i+1);
        scanf("%d",&k);
        sum = sum+k;
    }


    printf("The sume of %d numbers is %d \n",n,sum);
    return 0;
}

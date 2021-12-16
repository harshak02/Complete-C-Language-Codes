#include<stdio.h> 

int main(){
    int a;
    int sum;
    sum=0;
    int n;
    a=1;

    printf("Enter the value of n \n");
    scanf("%d",&n);

    // while(a<=n){
    //     sum +=a;
    //     a++;
    // }

    /*do{
        sum +=a;
        a++;

    }while(a<=n);*/
    
    for(a=1;a<=n;a++){
        sum +=a;
    }

    printf("The sum of n natural numbers is %d",sum);

    return 0;
}
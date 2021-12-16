#include<stdio.h> 

int main(){
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);

    if(num==1){
        printf("The number is 1");

    }
    else if(num==2){
        printf("The number is 2");
    }

    else if(num==3){
        printf("The number is 3");
    }    
    
    else{
        printf("The number is other than 1,2,3");
    }
    return 0;
}
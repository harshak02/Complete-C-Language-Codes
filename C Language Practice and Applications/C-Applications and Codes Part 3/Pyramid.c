#include<stdio.h> 

void pattern(int num){

    for(int i=1;i<=num;i++){
        for(int j=1;j<=((2*num)-1);j++){
            
            if(j>=num-(i-1) && j<=num+(i-1)){
                printf("*");
            }

            else{
                printf(" ");
            }
        
        }
        printf("\n");
    }
}

int main(){
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    pattern(num);

    return 0;
}

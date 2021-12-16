#include<stdio.h> 

int main(){
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);


    for(int i=num;i;i--){
        for(int j=0;j<2*num-1;j++){
            if(j>(((2*num-2)/2)-i)&& j<(((2*num-2)/2)+i)){
                printf("*");
            }

            else{
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

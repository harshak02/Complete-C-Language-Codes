#include<stdio.h>

int fibronaci(int num);

int main(){
    
    int num;
    int result;
    printf("Enter the number :\n");
    scanf("%d",&num);

    result = fibronaci(num);

    printf("The %d term in the fibronaci series is %d",num,result);
    return 0;
}

int fibronaci(int num){
    if(num==1){
        return 0;
    }

    else if(num==2){
        return 1;
    }

    else{
        return fibronaci(num-1) + fibronaci(num-2);
    }

}

#include<stdio.h> 

int main(){
    int num;
    int temp;

    printf("Enter the number :\n");
    scanf("%d",&num);

    for(int i =2;i<num;i++){
        if(num%2==0){
            temp = 0;
            break;
        }

        else{
            temp = 1;
        }
    }

    (temp==0) ? printf("The number %d is composite number",num) : printf("The number %d is prime number",num);
    return 0;
}

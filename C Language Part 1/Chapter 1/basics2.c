#include<stdio.h> 

int main(){
    
    int k;
    printf("Enter the number k to check the divisibility with 97 \n");
    scanf("%d",&k);

    printf("Divisibility occurs if the answer is 0 so the answer is --> %d \n", k%97);
    return 0;
}

// #include<stdio.h> 

// int main(){
//     int n;

//     printf("Enter the number n \n");
//     scanf("%d",&n);

//     if(n%97==0){
//         printf("The number %d is divisible by 97\n",n);
//     }

//     else{
//         printf("The number %d is not divisible by 97\n",n);
//     }
//     return 0;
// }
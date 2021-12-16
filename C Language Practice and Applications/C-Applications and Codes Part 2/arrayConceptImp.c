// #include<stdio.h>
// void multiplication(int arr[20],int n){
//     for(int i=0;i<20;i++){
//         arr[i]=n*(i+1);
//     }
// } 

// int main(){
//     int n;
//     printf("Enter the value of n \n");
//     scanf("%d",&n);

//     int arr[20];

//     multiplication(arr,n);

//     for(int i=0;i<20;i++){
//         printf("%d X %d = %d\n",n,i+1,arr[i]);
//     }

//     return 0;
// }

#include<stdio.h>
void multiplication(int *ptr,int n){
    for(int i=0;i<20;i++){
        *(ptr+i)=n*(i+1);
    }
} 

int main(){
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int arr[20];
    // int *ptr = arr;
    int *ptr;
    ptr = arr;

    multiplication(ptr,n);

    for(int i=0;i<20;i++){
        printf("%d X %d = %d\n",n,i+1,arr[i]);
    }

    return 0;
}
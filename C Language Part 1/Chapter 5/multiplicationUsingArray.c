#include<stdio.h> 

int main(){
    int arr[10];
    int n;

    printf("Enter the value of n is \n");
    scanf("%d",&n);

    for(int i =0;i<10;i++){
        arr[i] = (i+1)*n;
    }

    for(int j =0;j<10;j++){
        printf("%d X %d = %d\n",n,(j+1),arr[j]);
    }

    return 0;
}

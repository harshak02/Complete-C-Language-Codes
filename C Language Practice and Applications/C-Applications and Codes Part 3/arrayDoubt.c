#include<stdio.h>

void funct(int arr[]){

    for (int i =0;i<6;i++){
        arr[i] = i+2;
    }

    for (int i =0;i<6;i++){
        printf("%d ",arr[i]);

    }

    printf("\n");
}

int main(){
    
    int arr[] = {1,2,3,4,5,6};

    funct(arr);

    for (int i =0;i<6;i++){
        printf("%d ",arr[i]);

    }

    return 0;
}

//here if we send arrays to the function then it wont take the 
//xerox values it will send the exact values itself
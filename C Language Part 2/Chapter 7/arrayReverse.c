#include<stdio.h>

// void arrayReverse(int *ptr, int n){

//     int temp;
//     for(int i =0;i<(n/2);i++){

//         temp = *(ptr+i);
//         *(ptr+i) = *(ptr+(n-i-1));
//         *(ptr+(n-i-1)) = temp;

//     }
// }

void arrayReverse(int arr[], int n){
    //if we use this then also we can change the original array

    int temp;
    for(int i =0;i<(n/2);i++){

        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;

    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int *ptr = arr;

    arrayReverse(ptr,7);

    for(int i =0;i<7;i++){
        printf("The %d element of the array is : %d\n",i+1,arr[i]);
    }

    return 0;
}
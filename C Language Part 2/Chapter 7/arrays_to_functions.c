// #include<stdio.h>

// // void printArray(int *ptr, int n){
// //     for(int i=0; i<n; i++){
// //         printf("The value of element %d is %d\n", i+1, *(ptr+i)); 
// //     }
// // }

// void printArray(int ptr[], int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is %d\n", i+1, ptr[i]); 
//     } 
//     ptr[2] = 5555; // This value will be changes in arr array of main as well
// }

// int main(){
//     int arr[] = {1,2,3543,34,3,645,23};
//     printArray(arr, 7);
//     printf("%d", arr[2]);
//     return 0;
// }

#include<stdio.h> 
// void printarrayptr(int *ptr,int n){
//     for(int i =0;i<n;i++){
//         printf("The value of the %d element in the array is %d \n",i+1,*(ptr+i));
//     }
//     *(ptr+2)=5555;
// }

void printarrayptr(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("The value of the %d element in the array is %d \n",i+1,arr[i]);
    }
    arr[2] = 5555;
}
//Also correct

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printarrayptr(arr,7);
    printf("%d",arr[2]);

    return 0;
}

// #include<stdio.h>
// void printarrayptr(int *ptr,int n); 

// int main(){
//     int arr[] ={1,2,3,4,5,6,7};
//     printarrayptr(arr,7);

//     return 0;
// }

// void printarrayptr(int *ptr,int n){
//     for(int i =0;i<n;i++){
//         printf("The value of the %d element in the array is %d \n",ptr[i]);
//     }
// }


// if we use pointers and arrays combination then we need to eqaute the *ptr and arr directly
//if we use the functions and arrays and pointers then we need not equate the pointers and array directly
//from arrays and pointers we need to write the function above itself
// here again we need to ensure that *ptr will only equate to array if needed in main function other than that we should not agian use *ptr in the main function but we can use in the function above.......if needed use & symbol in the scanf
// for loop we use n no inthe above function type so pakka in that function prototype we need to mention and use that

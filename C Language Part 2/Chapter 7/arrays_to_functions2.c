#include<stdio.h>

void printarray(int *ptr,int n){

    for(int i =0;i<n;i++){
        printf("The %d element in the array is %d\n",i+1,*(ptr+i));
    }

    *(ptr+2) = 5555;
}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int *ptr = arr;

    printarray(ptr,7);// perfect;

    printf("The value of the 3rd element after change is %d\n",*(ptr+2));
    printf("The value of the 3rd element after change is %d",arr[2]);

    return 0;
}

#include<stdio.h> 

int main(){
    int arr[] = {1,2,3,4,5,6,77};
    int *ptr = arr;

    for(int i =0;i<7;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}

// in strings if char str[10][100] here pls use this as the char * ptr = str[k] seprately
// and above also in function we need to use directly void xxxx(char str[10][100])

// but in integer double array as declaring a varaible in the function then pls declare as 
// int arr[] and also while pointer use int *ptr = *arr;
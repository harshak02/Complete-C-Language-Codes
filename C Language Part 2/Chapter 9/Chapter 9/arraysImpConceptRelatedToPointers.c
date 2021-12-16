#include<stdio.h>

void display(int *ptr){
    for(int i =0;i<5;i++){
        printf("The  value of number %d is %d\n",i+1,*(ptr+i));
    }
}

int main(){
    int arr[5];
    int *ptr = arr;

    for(int i =0;i<5;i++){
        printf("Enter the %d number in the array\n",i+1);
        scanf("%d",ptr+i);// for nomal arrays we can use like this
        //but for structure related arrays we need to use like &(*(ptr+i))
    }

    display(ptr);

    return 0;
}

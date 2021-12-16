// #include<stdio.h>
// void wrong_swap(int a, int b);
// void swap(int *a, int *b);

// int main(){
//     int x=3, y=4;
//     printf("The value of x and y before swap is %d and %d\n", x, y);
//     //wrong_swap(x, y); // will not work due to call by value
//     swap(&x, &y); // will work due to call by reference
//     printf("The value of x and y after swap is %d and %d\n", x, y);

//     return 0;
// }

// void wrong_swap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

#include<stdio.h>
// void wrong_swap(int a,int b);
void swap(int *a,int *b); 

int main(){
    int a =4,b=5;
    printf("The value of a and b before swap is %d and %d \n",a,b);
    // wrong_swap(a,b);
    swap(&a,&b);
    printf("The value of a and b after swap is %d and %d \n",a,b);
    
    return 0;
}

// void wrong_swap(int a,int b){
//     int temp;
//     temp = a ;
//     a = b;
//     b = temp;

// }

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;


}
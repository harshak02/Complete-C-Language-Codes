#include<stdio.h>
void printadd(int *ptr){
    printf("The value of the address a is %u \n",ptr);

} 

int main(){
    int a = 6;
    int*ptr = &a;

    printf("The value of a is %d \n",a);
    printadd(ptr);
    printf("The value of the address a is %u\n",ptr);


    
    return 0;
}

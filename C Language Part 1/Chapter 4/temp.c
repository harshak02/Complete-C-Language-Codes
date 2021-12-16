#include<stdio.h> 

int main(){
    int i = 4;
    int j = 4;

    printf("The number is %d\n",i++);
    printf("The number is %d\n",++j);

    int k = 4;
    k++;
    printf("The number is %d\n",k);//note the difference

    return 0;
}


#include<stdio.h> 

int main(){
    int x=4;
    int y=3;
    printf("The value of 3*x+4*y is %d \n",3*x+4*y);
    printf("The value of 3*x/4*y is %d",(3*x/4*y)); 
    return 0;
}

//if we have only * and / then go from left to ryt
//but if plus is there then give preferance to * and /

#include<stdio.h> 

int main(){

    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    int i =1;
    do{
        printf("The n natural numbers are %d \n",i);
        i++;

    }while(i<=n);
    return 0;
}
// watch once the notes pdf of this loops concept at the tim eof revisoion
//after print("bla bla") it should
// be witten next by a++... but in if we need to write after }

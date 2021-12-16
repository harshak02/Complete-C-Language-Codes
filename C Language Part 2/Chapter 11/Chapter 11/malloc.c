#include<stdio.h>
#include<stdlib.h> 

int main(){
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));

    for(int i=0;i<6;i++){
        printf("Enter the value of %d element\n",i+1);
        scanf("%d",&(*(ptr+i)));
        // this here the ptr is used and the syntax is same as
        //that of the structure (only two cases we use this)
    }

    for(int i=0;i<6;i++){
        printf("The value of %d element is %d \n",i+1,*(ptr+i));
    }

    return 0;
}

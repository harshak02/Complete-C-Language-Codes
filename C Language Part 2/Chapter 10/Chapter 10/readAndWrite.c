#include<stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("int.text","r");
    int num;
    int num1;
    
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    num1 = 2*num;

    ptr = fopen("int.text","w");
    fprintf(ptr,"%d",num1);

    return 0;
}

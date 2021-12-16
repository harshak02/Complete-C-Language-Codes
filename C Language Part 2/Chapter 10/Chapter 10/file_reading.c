// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     int num;
//     int num2;
//     ptr = fopen("Harry.txt", "r");
//     fscanf(ptr, "%d", &num);
//     fscanf(ptr, "%d", &num2);
//     fclose(ptr);
//     printf("The value of num is %d\n", num);
//     printf("The value of num2 is %d\n", num2);
//     return 0;
// }

#include<stdio.h> 

int main(){
    
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("harsha.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);// only 2 numbers should be present in file 
    // exactly
    fclose(ptr);

    printf("The value of the num is %d \n",num);
    printf("The value of the num2 is %d",num2);


    return 0;
}

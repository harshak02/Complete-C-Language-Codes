#include<stdio.h>

// int main(){
//     FILE *ptr;
//     int num;
//     int num2;
//     ptr = fopen("Harr3y.txt", "r");
//     if (ptr == NULL){
//         printf("This file does not exist\n");
//     }
//     else{ 
//         fscanf(ptr, "%d", &num);
//         fscanf(ptr, "%d", &num2);
//         fclose(ptr);
//         printf("The value of num is %d\n", num);
//         printf("The value of num2 is %d\n", num2);
//     }
//     return 0;
// }



// in the structures and the file i/o we need to use ptr directly in application 
//in functions pointers and arrays we need to use ptr as *ptr
// continue and break is used in the loops only

#include<stdio.h> 

int main(){
    
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("harsha1.txt","r");

    // if(ptr == NULL){
    //     printf("The file does not exist \n");
    // }

    // else{// if commented it would give random values

    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);

    printf("The value of the num is %d \n",num);
    printf("The value of the num2 is %d \n",num2);
    
    // }

    return 0;
}

// #include<stdio.h>

// int main(){
//     FILE *fptr;
//     int number = 45;
//     fptr = fopen("generated.txt", "w");
//     fprintf(fptr, "The number is %d\n", number);
//     fprintf(fptr, "Thanks for using fprintf", number);
//     fclose(fptr);

//     return 0;
// }

#include<stdio.h> 

int main(){
    FILE *ptr;
    int num = 55;
    ptr = fopen("generated1.txt","w");
    fprintf(ptr,"The number is %d \n",num);
    fprintf(ptr,"Thanks for printing the num in the file \n");
    fclose(ptr);
    
    
    return 0;
}

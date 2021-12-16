// #include<stdio.h> 

// int main(){
//     FILE  *ptr;
//     ptr = fopen("getc.txt","r");
//     char c = fgetc(ptr);
//     printf("The word in the letter is %c \n",fgetc(ptr));
    
//     return 0;
// }

#include<stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("fputc1.txt","w");
    fputc('c',ptr);
    fputc('c',ptr);
    fputc('c',ptr);
    fclose(ptr);


    return 0;
}
//fputc and fgetc are just used for single single charecter wherase frintf and fscaf are used for the frequent uses
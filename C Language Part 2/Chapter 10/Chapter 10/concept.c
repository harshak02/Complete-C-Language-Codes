#include<stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("imp.txt","r");
    char c;
    c = fgetc(ptr);
    printf("%c",c);
    c = fgetc(ptr);
    printf("%c",c);

    fclose(ptr);

    printf("\n\n");

    ptr = fopen("imp.txt","r");

    char d;
    fscanf(ptr,"%c",&d);
    printf("%c",d);
    fscanf(ptr,"%c",&d);
    printf("%c",d);

    return 0;
}
// bothe fscanf and fgetc will do same duties
//but in while loop or any other loop pls avoid using fscanf in the loop but we can use the fgetc 

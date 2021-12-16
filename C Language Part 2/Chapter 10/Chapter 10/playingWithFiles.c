#include<stdio.h> 

int main(){
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("read.txt","r");
    char c;
    c = fgetc(ptr1);
    printf("%c\n",c);
    fclose(ptr1);

    ptr2 = fopen("write.txt","w");

    // fputc(c,ptr2);
    // fputc(c,ptr2);// preferable to use this

    fprintf(ptr2,"%c",c);
    fprintf(ptr2,"%c",c);

    fclose(ptr2);

    return 0;
}

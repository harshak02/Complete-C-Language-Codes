#include<stdio.h>

void strcpyown(char *ptr1,char *ptr2){


    while(*ptr2!='\0'){

        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    *ptr1 = '\0';
}

int main(){
    
    char str1[100];
    char str2[100];

    printf("Enter the string1 :\n");
    scanf("%s",str1);

    printf("Enter the string2 :\n");
    scanf("%s",str2);

    char *ptr1 = str1;
    char *ptr2 = str2;

    strcpyown(ptr1,ptr2);

    printf("%s\n",ptr1);
    printf("%s\n",ptr2);


    return 0;
}


//https://www.programiz.com/c-programming/library-function/string.h
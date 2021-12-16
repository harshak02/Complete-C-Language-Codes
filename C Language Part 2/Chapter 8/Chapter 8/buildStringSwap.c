#include<stdio.h>
#include<string.h>

void strswap(char *ptr1,char *ptr2){

    int l1 = strlen(ptr1);
    int l2 = strlen(ptr2);

    if(l1<=l2){
        while(*ptr2!='\0'){

        char temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2++;

        }

    }

    else if(l1>l2){
        while(*ptr1!='\0'){

        char temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2++;

        }
    }

    *ptr2 = '\0';
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

    strswap(ptr1,ptr2);

    printf("%s\n",ptr1);
    printf("%s\n",ptr2);


    return 0;
}

#include<stdio.h> 
#include<string.h>

void strswap(char *ptr1,char *ptr2){
    char temp[100];

    strcpy(temp,ptr1);
    strcpy(ptr1,ptr2);// here we are using whole string at once so
    strcpy(ptr2,temp);//so use the whole ptr not *ptr

}

int main(){

    char name1[100];
    char *ptr1 = name1;
    char name2[100];
    char *ptr2 = name2;

    printf("Enter the name1\n");
    scanf("%s",ptr1);

    printf("Enter the name2\n");
    scanf("%s",ptr2);

    strswap(ptr1,ptr2);

    printf("The name1 is %s\n",name1);
    printf("The name2 is %s\n",name2);

    return 0;
}

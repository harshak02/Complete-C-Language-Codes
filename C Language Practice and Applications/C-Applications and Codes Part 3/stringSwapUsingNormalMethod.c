#include<stdio.h> 
#include<string.h>

void strswap(char name1[100],char name2[100]){
    char temp[100];

    strcpy(temp,name1);
    strcpy(name1,name2);
    strcpy(name2,temp);
}

int main(){

    char name1[100];
    char name2[100];

    printf("Enter the name1\n");
    scanf("%s",name1);

    printf("Enter the name2\n");
    scanf("%s",name2);

    strswap(name1,name2);

    printf("The name1 is %s\n",name1);
    printf("The name2 is %s\n",name2);

    return 0;
}

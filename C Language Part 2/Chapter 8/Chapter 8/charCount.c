#include<stdio.h>
#include<string.h>

int charCount(char *ptr,char c){

    int count;
    count = 0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }

    return count;
}

int main(){
    char c;
    char str[34];
    char *ptr = str;
    int count;

    printf("Enter the string : \n");
    scanf("%s",str);

    printf("Enter the character : \n");
    scanf("%c",&c);

    count = charCount(ptr,c);

    printf("The number of times %c repeated in the %s is : %d\n",c,str,count);

    return 0;
}


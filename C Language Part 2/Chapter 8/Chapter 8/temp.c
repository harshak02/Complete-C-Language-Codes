#include<stdio.h> 

int main(){
    char name [] = {'H','a','r','r','y','\0'};
    char *ptr = name;
    int i = 0;

    while(*(ptr+i)!='\0'){
        printf("%c",*(ptr+i));
        i++;
    }

    return 0;
}

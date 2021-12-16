#include<stdio.h>

int lenstr(char *ptr){// we can enter by the *ptr in these functions

    int len=0;

    // ptr = "harrybhai";// again this works

    while(*ptr!='\0'){//here we used the pter coz we are deaking with
    //every single letter of the string
        len++;
        ptr++;
    }

    return len;
}

int main(){
    
    char str[100];

    printf("Enter the string to count lenght\n");
    scanf("%s",str);

    char *ptr = str;
    int len;

    len = lenstr(ptr);
    printf("The lenght of the string %s is %d\n",ptr,len);

    return 0;
}

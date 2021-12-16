#include<stdio.h>
#include<string.h>

void slice(char str[],int m,int n){

    int i =0;
    while((m+i)<n){

        str[i] = str[m+i];
        i++;
    }

    str[i] = '\0';

    printf("%s\n",str);
}

int main(){
    
    char str[] = "Harrybhai";
    char *ptr = str;

    slice(str,1,4);

    return 0;
}

#include<stdio.h>
#include<string.h>

void slice(char *ptr,int m,int n){

    int i =0;
    while((m+i)<n){//genrally use while loops in strings
    // if numbers are there then pls try to use the <,> b/w them
    //if we take str or ptr then use *ptr!='\0'

        *(ptr+i) = *(ptr+(m+i));
        i++;
    }

   *(ptr+i) = '\0';

}

int main(){
    
    char str[] = "Sreeharsha";
    char *ptr = str;

    slice(ptr,1,4);

    printf("%s",str);

    return 0;
}

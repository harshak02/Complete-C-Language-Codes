#include<stdio.h> 
#include<string.h>

int main(){
    
    char str[] = "This is harsha";
    char *ptr = str;

    //dont prefer this:-
    // while(*ptr!=EOF){
    //     if(*ptr==' '){
    //         printf("\n");
    //     } // this giving error at the last line some garbage value is printing after harsha
    //     else{
    //         printf("%c",*(ptr));
    //     }
    //     ptr++;
    // }

    for(int i=0;i<strlen(str);i++){

        if(*(ptr+i)==' '){
            printf("\n");
        }

        else{
            printf("%c",*(ptr+i));
        }
    }
    return 0;
}

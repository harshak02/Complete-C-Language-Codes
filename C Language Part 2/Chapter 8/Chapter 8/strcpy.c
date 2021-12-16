// #include<stdio.h>
// #include <string.h>

// int main(){
//     char *st = "This";
//     char st2[45];
//     strcpy(st2, st);
//     printf("Now the st2 is %s", st2);
//     return 0;
// }

#include<stdio.h>
#include<string.h> 

int main(){
    char second[65];
    char first[] = "first";

    printf("Enter your name :");
    gets(second);
    strcpy(second,first);

    printf("%s",second);
    
    return 0;
}

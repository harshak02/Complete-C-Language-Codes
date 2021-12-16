// #include<stdio.h>

// int main(){
//     char s[34];
//     printf("Enter your name: ");
//     scanf("%s", s);
//     printf("Your name is %s", s);
//     return 0;
// }

#include<stdio.h> 

int main(){
    char name[34];
    printf("Enter your name : ");
    scanf("%s",name);
    //and also dont use & if any ptr terms itslef comes over there
    // this name is not pointing to a single thing so dont use &
    printf("Your name is %s",name);
    return 0;
}

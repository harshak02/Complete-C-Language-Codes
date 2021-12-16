// #include<stdio.h>
// #include <string.h>

// int main(){
//     char st1[45] = "Hello";
//     char *st2 = "Harry";
//     strcat(st1, st2);
//     printf("Now the st1 is %s", st1);
//     return 0;
// }

#include<stdio.h>
#include <string.h> 

int main(){
    char first[] = "My Name is ";
    char second[35];
    printf("Enter your name please \n");
    gets(second);
    strcat(first,second);// !(1st one will be as it is and second is added to first)
    printf("%s\n",second);
    printf("%s",first);
    return 0;
}

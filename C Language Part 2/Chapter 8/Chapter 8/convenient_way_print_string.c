// #include<stdio.h>

// int main(){
//     // int a = 4;
//     // printf("%d", a);

//     // char *ptr = "Harry bhai";
//     char ptr[] = "Harry bhai";
//     printf("%s", ptr);
//     return 0;
// }

#include<stdio.h> 

int main(){
    char str[]= "harry bhai";
    // char *ptr = str;
    // printf("%s",ptr);// explanation is down
    printf("%s",str);
    return 0;
}

/*here string is supposed to be printed all elements at a time so therfore
we use only ptr insted of *ptr(*pte is used only to point an single letter or number
in a huge array or string) in displaying the string*/ 
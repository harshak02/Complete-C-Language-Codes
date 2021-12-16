#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Hel";
    char *st2 = "Helo";
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);
    return 0;
}


// #include<stdio.h>
// #include<string.h>

// //run the values and check
// //prefernce is given to left side alphabets 
// int main(){
//     char first[] = "hae";
//     char second[] = "harsha";
//     int lenght = strcmp(first,second);
//     printf("The value of strcmp is %d",lenght);
    
//     return 0;
// }

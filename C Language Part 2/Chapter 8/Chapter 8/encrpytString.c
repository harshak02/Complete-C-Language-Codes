// #include<stdio.h>
// void encrypt(char *c){
//     char *ptr = c;
//     while(*ptr!='\0'){
//         *ptr = *ptr + 1; 
//         ptr++;
//     }
// }

// int main(){
//     char c[] = "come to this room";
//     encrypt(c);
//     printf("Encrypted string is: %s", c);
//     return 0;
// }

#include<stdio.h>
void encrypt(char *ptr){
    while(*ptr!='\0'){
        *ptr = *ptr + 1;

        ptr++;
    }

} 

int main(){
    char str[] = "Sreeharsha";
    char *ptr = str;
    encrypt(str);

    printf("The encrypted secret message from user is %s",str);
    return 0;
}
#include<stdio.h> 

int main(){
    char c;

    printf("Enter the character \n");
    scanf("%c",&c);
    // lower case letters ascii values are from 97-122;

    if((c>=97) && (c<=122)){
        printf("The charecter %c is lower case \n",c);
    }

    else{
        printf("The charecter %c is upper case \n",c);
    }
    return 0;
}
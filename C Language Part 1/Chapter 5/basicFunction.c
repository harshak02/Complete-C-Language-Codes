#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight(); 

int main(){
    goodmorning();
    // goodafternoon();    //we can use the good aft above and below understand the meaning
    // goodnight();
    
    return 0;
}

void goodmorning(){
    printf("Good morning harshu \n");
    goodafternoon();
}
void goodafternoon(){
    printf("Good afternoon harshu \n");
    goodnight();
}
void goodnight(){
    printf("Good night harshu \n");
}
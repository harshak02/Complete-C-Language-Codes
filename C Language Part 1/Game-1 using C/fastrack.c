#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main(){
    int number;
    int guess;
    int number_of_guesses;
    number_of_guesses = 1;
    srand(time(NULL));
    number = rand()%100+1;

    do{

        printf("Enter the number\n");
        scanf("%d",&guess);

        if(guess>number){
            printf("Lower number please!\n");
        }

        else if(guess<number){
            printf("Higher number please!\n");
        }

        else{
            printf("CORRECT!!..The number of guesses you taken is %d",number_of_guesses);
        }
        number_of_guesses++;

    }while(guess!=number);

    return 0;
}

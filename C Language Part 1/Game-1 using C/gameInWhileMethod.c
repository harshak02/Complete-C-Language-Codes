#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess;
    int number_of_guess = 1;
    srand(time(NULL));
    number = rand()%100 + 1;

    for(;;){

        printf("Enter the number\n");
        scanf("%d",&guess);

        if(guess>number){
            printf("Lower number please!\n");
        }

        else if(guess<number){
            printf("Higher number please!\n");
        }

        else{
            printf("CORRECT!!..The number of guesses you taken is %d",number_of_guess);
            break;
        }
        number_of_guess++;
    }

    return 0;
}

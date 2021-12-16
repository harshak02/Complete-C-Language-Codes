#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int gamecpu(char user,char comp){
    int result;

    if(user =='s'){
        if(comp =='s'){
            result = 0;
        }

        else if(comp =='w'){
            result = 1;
        }

        else{
            result = -1;
        }
    }

    if(user =='w'){
        if(comp =='s'){
            result = -1;
        }

        else if(comp =='w'){
            result = 0;
        }

        else{
            result = 1;
        }

        
    }

    if(user =='g'){
        if(comp =='s'){
            result = 1;
        }

        else if(comp =='w'){
            result = -1;
        }

        else{
            result = 0;
        }
    }

    return result;
}


int main(){

    char user;
    char comp;
    int result;
    int number;

    srand(time(NULL));
    number = rand()%100+1;

    if(number<=33){
        comp = 's';
    }

    else if((number>33) && (number<=66)){
        comp = 'w';
    }

    else{
        comp = 'g';
    }

    printf("Enter your choice 's' for snake 'g' for gun and 'w' for water\n");
    scanf("%c",&user);

    result = gamecpu(user,comp);

    if(result==1){
        printf("Hey you won! the computer chosen %c and you %c\n",comp,user);
    }

    else if(result==-1){
        printf("You lost! the computer chosen %c and you %c\n",comp,user);
    }

    else{
        printf("The game is drawn! computer chosen %c and you %c\n",comp,user);
    }

    return 0;
}

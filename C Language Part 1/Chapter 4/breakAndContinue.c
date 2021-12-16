#include<stdio.h> 

int main(){
    int a;
    int skip;
    skip=5;
    a=0;

    while(a<10){
        a++;// this is important re

        if(a==skip){
            continue;// this doesnt go downwards and goes to the next case
            //break;// this doesnt go downwards and doesnot goes to the next case too
        }

        printf("%d \n",a);
    
    }

    return 0;
}

// continue means even if the case is wronfg go for next and then again for other come back
// is skips the particular case (continue)

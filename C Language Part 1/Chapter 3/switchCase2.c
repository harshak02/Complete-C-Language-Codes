#include<stdio.h> 

int main(){
    int mark;
    printf("Enter the marks :\n");
    scanf("%d",&mark);

    switch(mark){
        case 1 :
        printf("You got one marks\n");
        break;

        case 2 :
        printf("You got two marks\n");
        break;

        default :
        printf("Marks are not known\n");

    }
    return 0;
}

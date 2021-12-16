#include<stdio.h> 

int main(){
    int marks;
    printf("Enter the marks :\n");
    scanf("%d",&marks);

    switch(marks){

        case 1 :
        printf("You have got 1 mark");
        break;

        case 2 :
        printf("You have got 2 marks");
        break;

        default :
        printf("You have not got any 2 marks ");

    }

    return 0;
}

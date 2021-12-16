#include<stdio.h> 

int main(){
    int marks;
    printf("Enter the marks \n");
    scanf("%d",&marks);

    if(marks>=80 && marks<=90){
        printf("You are A grrade studnet");
    }
    else if (marks>=70 && marks<=80)
    {
        printf("you are B grade student");
    }
    else if (marks>=60 && marks<=70){
        printf("you are C grade student");
    }
    else if (marks>=50 && marks<=60){
        printf("you are D grade student");
    }
    else{
        printf("Your are fail");
    }
    

    return 0;
}
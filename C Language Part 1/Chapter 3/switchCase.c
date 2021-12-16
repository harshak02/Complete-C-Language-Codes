#include<stdio.h> 

int main(){
    int marks;
    printf("Enter the marks \n");
    scanf("%d",&marks);

    switch(marks){
        case 87:
        printf("Your getting marks 80-90 so its A grade \n");
        break;

        case 79 :
        printf("Your getting marks 70-80 so its B grade \n");
        break;

        case 3:
        printf("your getting marks 60-70 so its C grade \n");
        break;

        case 4 : 
        printf("your getting marks 50-60 so its D grade \n");
        break;

        // case 5 :(marks<=50 && marks>=40);// this is wrong
        // printf("your getting marks 40-50 so its E grade \n");
        // break;

        default :
        printf("You are fail");
        // break;// no need to mention break here;
        

    }
    return 0;
}

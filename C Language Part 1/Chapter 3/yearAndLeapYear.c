#include<stdio.h> 

int main(){
    int year;
    printf("Enter the year you entered \n");
    scanf("%d",&year);

    if(year%4!=0){
        printf("The year is a non leap year \n");
        
    }
    
    if((year%4==0) && (year%100==0)){
        if(year%400==0){
            printf("The year is a leap year \n");
        }

        if(year%400!=0){
            printf("The year is a non leap year \n");
        }
    }
       
    

    if((year%4==0) && (year%100!=0)){
        printf("The year is a leap year \n");
    }

    printf("The year you entered is %d",year);



    return 0;
}
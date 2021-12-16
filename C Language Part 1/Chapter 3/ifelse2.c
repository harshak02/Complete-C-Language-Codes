#include<stdio.h> 

int main(){
    int age;

    printf("Enter the age of yours \n");
    scanf("%d",&age);

    if(age>=90){
        printf("You cannot drive as you are old \n");

    }

    else{
        printf("You can drive as you have legal age \n");
    }    
        
    if(age==50){
        printf("Half century 50 \n");
    } 
 

    
   // for not equal to != symbol used // == is used for equality check and = is used for assigment of a value to a parameter
   //and very important is age and half century and // any non zero will be considered as true
    return 0;
}

    /* the logical operator && is used for and and || is used for or  and ! for not */
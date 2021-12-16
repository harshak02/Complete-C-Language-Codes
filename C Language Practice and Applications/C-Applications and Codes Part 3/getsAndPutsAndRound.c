#include<stdio.h> 
#include<string.h>

int main(){
    char name[100];

    printf("Enter the name pls \n");
    gets(name);

    puts(name);
    printf("The name is : %s",name);
    
    return 0;
}

//int total = int(round(tax1+tax2+meal_cost));->imp
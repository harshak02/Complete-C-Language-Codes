#include<stdio.h> 

int main(){
    int age;
    int Vippass;
    // bool har;
    // har = 1;//->Dont have boolean datatype/ wrong
    Vippass=0;
    printf("Enter the age \n");
    scanf("%d",&age);

    if((age<=70 && age>=18) || !(Vippass==1) ){// ! is used for totally negotiation
    //of entered logic in if statement;
        printf("You can drive the car \n");

    }
    else{
        printf("You cannot drive");
    }

    return 0;
}
//!(Vippass==1)

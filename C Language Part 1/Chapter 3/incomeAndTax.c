#include<stdio.h> 

int main(){
    int income;
    float total_tax;
    printf("Enter the value of income \n");
    scanf("%d",&income);

    if((income>=250000) && (income<=500000)){
        total_tax = 0.05*(income-250000);
        printf("The tax should be paid and the tax is %f",total_tax);

    }
    else if((income>500000) && (income<=1000000)){
        total_tax = 0.20*(income-500000);
        printf("The tax should be paid and the tax is %f",total_tax);
    }
    else if (income>1000000){
        total_tax =0.30*(income-1000000);
        printf("The tax should be paid and the tax is %f",total_tax);
    }
    else{
        printf("No tax is paid");
    }
    
    return 0;
}
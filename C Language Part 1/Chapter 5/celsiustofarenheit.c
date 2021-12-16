#include<stdio.h>
float conevreter(int f); 

int main(){
    int f;
    float result;
    printf("Enter value of tempearature in f \n");
    scanf("%d",&f);
    result =conevreter(f); 
    printf("The value of the farenhiet in the celsius is %.2f\n",result);
    
    return 0;
}

float conevreter(int f){
    float result;
    result = (float)((0.5555555556*f)-17.7777777778);
    return result;
}
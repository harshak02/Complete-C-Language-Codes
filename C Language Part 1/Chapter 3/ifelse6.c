#include<stdio.h> 

int main(){
    int marks;

    printf("Enter the value of marks \n");
    scanf("%d",&marks);

    if(marks>50){
        printf("The Grade of the student for %d marks is A\n",marks);
    }

    if(marks<50){
        printf("The Grade of the student for %d marks is F\n",marks);
    }
    return 0;
}
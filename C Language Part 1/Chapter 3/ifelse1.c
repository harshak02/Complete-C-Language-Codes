#include<stdio.h> 

int main(){
    int m;
    int p;
    int c;
    float t;
    t=(float)m+p+c/3;

    printf("Enter the maths marks \n");
    scanf("%d",&m);
    printf("Enter the physics marks \n");
    scanf("%d",&p);
    printf("Enter the chemistry marks \n");
    scanf("%d",&c);
    
    if((t<=40)|| (m<=33) || (p<=33) || (c<=33)){
        printf("You have failed the exam with %f percentage \n",t);
    }
    else{
        printf("You have passed the exam with %f percentage \n",t);
    }


    return 0;

}    


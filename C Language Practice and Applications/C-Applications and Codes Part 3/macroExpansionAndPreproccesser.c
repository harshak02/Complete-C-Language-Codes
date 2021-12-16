#include<stdio.h> 

int main(){
    printf("The time is : %s\n",__TIME__);
    printf("The name is : %s\n",__FILE__);
    printf("The line is : %d\n",__LINE__);//6th line
    
    return 0;
}

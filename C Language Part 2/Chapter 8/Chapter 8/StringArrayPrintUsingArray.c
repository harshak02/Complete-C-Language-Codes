#include<stdio.h>

void display(char str[3][100]){
    
    for(int i =0;i<3;i++){
        printf("The string in array is %s\n",str[i]);
    }
}

int main(){

    char str[3][100];

    for(int i =0;i<3;i++){
        printf("Enter the %d th string in array\n",i+1);
        scanf("%s",str[i]);
    }

    display(str);

    return 0;
}

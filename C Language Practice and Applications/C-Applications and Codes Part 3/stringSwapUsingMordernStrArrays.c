#include<stdio.h>
#include<string.h>

void swap(char names[2][20]){
    char temp[20];
    strcpy(temp,names[0]);
    strcpy(names[0],names[1]);
    strcpy(names[1],temp);
} 
//temp one step down to the equated ones

int main(){
    char names[2][20];

    for(int i=0;i<2;i++){
        printf("Enter the value of %d string \n",i+1);
        scanf("%s",names[i]);
    }

    // swap(names);
    char temp[20];
    strcpy(temp,names[0]);
    strcpy(names[0],names[1]);
    strcpy(names[1],temp);

    for(int i=0;i<2;i++){
        printf("The value of %d string is %s \n",i+1,names[i]);
    }


    return 0;
}

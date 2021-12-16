#include<stdio.h>
#include<string.h> 

int main(){
    
    char first[100];
    char second[100];
    char *ptr = second;
    char c;
    int i =0;
    

    printf("Enter the first string \n");
    scanf("%s",first);

    printf("Enter the second string \n");

    while(c!='\n'){
        fflush(stdin);// if we enter the different values in the same
        //variable by swiping it we use fflush(stdin);
        scanf("%c",&c);
        *(ptr+i) = c;
        i++;

    }

    *(ptr+(i-1)) ='\0';// here we are intaking extra '\n' also so use i-1;
    //but deafault we need to take *(ptr+i)='\0';only
    
    printf("The value of the string 1 is %s \n",first);
    printf("The value of the string 2 is %s \n",second);

    int comparision = strcmp(first,second);
    printf("The value of the strcmp of the two arrays is %d",comparision);



    return 0;
}

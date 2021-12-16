#include<stdio.h>
#include<string.h> 

int main(){

    int salary1,salary2;
    char name1 [10];
    char name2 [10];

    printf("The name of the person 1 \n");
    // gets(name1);
    scanf("%s",&name1);


    printf("The salary of the 1st person \n");
    scanf("%d",&salary1);

    printf("The name of the person 2 is \n");
    scanf("%s",&name2);
    // gets(name2);


    printf("The salary of the 2nd person \n");
    scanf("%d",&salary2);


    FILE *ptr;
    ptr = fopen("varshi.txt","w");

    fprintf(ptr,"%s,%d \n",name1,salary1);
    fprintf(ptr,"%s,%d",name2,salary2);
    fclose(ptr);

    return 0;
}

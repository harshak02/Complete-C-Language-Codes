#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee *ptr){

    printf("The value of the code is %d \n",ptr->code);
    printf("The value of the salary is %.2f \n",(*ptr).salary);
    printf("The value of the name is %s \n",(*ptr).name);
    ptr->code = 36;// this one will work

}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 10.001;
    strcpy((*ptr).name,"Harsha");

    show(ptr);

    printf("The value of the code is %d \n",ptr->code);

    
    return 0;
}

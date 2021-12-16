// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

// void show(struct employee emp){
//     printf("The Code of employee is: %d\n", emp.code);
//     printf("The Salary of employee is: %f\n", emp.salary);
//     printf("The Name of employee is: %s\n", emp.name);
//     emp.code = 34;
// }
// int main(){
//     struct employee e1;
//     struct employee *ptr;

//     ptr = &e1;
//     //(*ptr).code = 101; //or you can also write: ptr->code = 101;
//     ptr->code = 101;
//     ptr->salary = 11.01;
//     strcpy(ptr->name, "Harry");

//     show(e1); 
//     printf("The Code of employee is: %d\n", e1.code);

//     return 0;
// }

#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee e1){
    printf("The value of the code is %d \n",e1.code);
    printf("The value of the salary is %f \n",e1.salary);
    printf("The value of the name is %s \n",e1.name);

    // e1.code = 45;wont work;

}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 10.001;
    strcpy((*ptr).name,"Harsha");

    show(e1);

    printf("The value of the code is %d \n",e1.code);

    
    return 0;
}

/* here the struct employee is the data type (treated as data type)
but in c++ class only the name is treated as datatype so c++ aldready typedefed
means the reason is the one mentioned above*/

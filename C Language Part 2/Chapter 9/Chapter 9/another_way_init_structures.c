// #include<stdio.h>
// #include<string.h>

// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

// int main(){
//     struct employee harry = {100, 34.23, "Harry"};

//     printf("Code is: %d \n", harry.code);
//     printf("Salary is: %f \n", harry.salary);
//     printf("Name is: %s \n", harry.name);
 

//     return 0;
// }

#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[20];
} ;

int main(){

    struct employee harsha = {100,49.09,"sreeharsha"};

    printf("The value of the code of the employee is %d \n",harsha.code);
    printf("The value of the salary of the employee is %.2f \n",harsha.salary);
    printf("The name of the employee is %s \n",harsha.name);
    
    return 0;
}

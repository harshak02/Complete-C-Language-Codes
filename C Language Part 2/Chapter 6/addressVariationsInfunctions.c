// #include<stdio.h>

// void printAdd(int a){
//     printf("The address of variable a is %u\n", &a);
// }

// int main(){
//     int i = 4;
//     printf("The value of variable i is %d\n", i);
//     printAdd(i);
//     printf("The address of variable i is %u\n", &i);
//     return 0;
// }

#include<stdio.h>
void printadd(int a){
    printf("The value of the address a is %u \n",&a);

} 

int main(){
    int a = 6;
    printf("The value of a is %d \n",a);
    printadd(a);
    printf("The value of the address a is %u",&a);


    
    return 0;
}

/* here if we directly send the ptr to the function then we are exactly sending
the variable dataype itself but if we directly pass the dataype then one xerox
copy is passed so that if changed the values above it wont effect the  original 
variable datatype in main*/
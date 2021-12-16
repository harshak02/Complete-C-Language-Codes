#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %d\n", *(&j));
    return 0;
}


// #include<stdio.h> 

// int main(){
//     int i =34;
//     int *j = &i;
//     printf("The value of i is %d \n",i);
//     printf("The value of the address of i %u\n",&i);
//     printf("The value of the i is %d \n",*(&i));
//     printf("The value of i is %u \n",*j);
//     printf("The value of the address of the i is %u \n",j);
//     printf("The address of j is %u \n",&j);
//     printf("The value of j is %u \n",*(&j));

//     return 0;
// }
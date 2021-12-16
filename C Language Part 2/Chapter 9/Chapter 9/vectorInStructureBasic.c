// #include<stdio.h>

// struct vector{
//     int x;
//     int y;
// };

// int main(){
//     struct vector v1, v2;
//     v1.x = 34;
//     v1.y = 54;
//     printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

//     v2.x = 3345;
//     v2.y = 534;
//     printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);
//     return 0;
// }

#include<stdio.h>
struct vector{
    int x;
    int y;
};



int main(){

    struct vector v1,v2;

    v1.x = 3;
    v1.y = 4;
    printf("The dim of x is %d and the dim of y is %d \n",v1.x,v1.y);

    v2.x = 5;
    v2.y = 6;
    printf("The dim of x is %d and the dim of y is %d \n",v2.x,v2.y);

    
    return 0;
}

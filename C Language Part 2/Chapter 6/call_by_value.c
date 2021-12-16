// #include<stdio.h>
// int sum (int a, int b);
// int main(){
//     int x=4, y=7;
//     printf("The value of x and y is %d and %d\n", x, y);
//     printf("The value of 4+7 is %d\n", sum(x, y));
//     printf("The value of x and y after function call is %d and %d\n", x, y);
//     return 0;
// }
// int sum (int a, int b){
//     int c;
//     c = a + b;
//     b =3434;
//     a = 23432;  
//     return c;
// }

#include<stdio.h>
int sum(int a,int b); 

int main(){
    int a =3; int b =4;
    int result;
    printf("The value of a and b before is %d and %d \n",a,b);
    result = sum(a,b);
    // a = 3434; b = 4242;
    printf("The sum of a,b is %d \n",result);
    printf("The value of a and b after is %d and %d \n",a,b);
    
    return 0;
}

int sum(int a,int b){
    int result;
    result = a+b;
    a = 3434; b = 4242;// if we iterate the values here it wont effect
    return result;

}

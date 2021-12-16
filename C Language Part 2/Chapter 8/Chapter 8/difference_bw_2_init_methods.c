#include<stdio.h>

int main(){ 
  
    char str[] = "Harry Bhai";
    char *ptr = str;
    printf("%s\n", ptr);
    ptr = "Shubham bhai";// same logic here coz here *ptr points only to one 
    // str = "RameshPokriyal";->we cant change like this so use pointers
    //elemmnt so use the ptr only
    printf("%s\n", ptr);
    return 0;
}

// the array's we need to treat as pointers in scanf
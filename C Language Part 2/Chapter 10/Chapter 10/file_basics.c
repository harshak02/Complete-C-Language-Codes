// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     // ptr = fopen("sample2.txt", "r"); //--> for reading the file
//     //ptr = fopen("sample2.txt", "w"); //--> for writing to a file
//     return 0;
// }

#include<stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("harsharead.txt","r");//->only opens if file aldready
    //presnt in the vs code list;
    // ptr = fopen("harshawrite.txt","w");// opens if file name is their or
    //not it opens by creating it
    return 0;
}

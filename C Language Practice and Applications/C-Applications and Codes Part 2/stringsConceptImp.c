// #include<stdio.h>
// void print_array(char arr[100]){
//     printf("the element in the array is %s \n",arr);

// } 

// int main(){
//     char arr[100];

//     printf("Enter the element in the array \n");
//     scanf("%s",arr);

//     print_array(arr);

//     return 0;
// }

#include<stdio.h>

void print_array(char *ptr){
    printf("the element in the array is %s \n",ptr);

} 

int main(){
    char arr[100];
    char *ptr = arr;

    printf("Enter the element in the array \n");
    scanf("%s",arr);

    print_array(arr);

    return 0;
}
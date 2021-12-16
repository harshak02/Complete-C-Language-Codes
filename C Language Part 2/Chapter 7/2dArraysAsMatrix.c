#include<stdio.h> 

int main(){

    int rows;
    int cols;

    printf("Enter the number of rows\n");
    scanf("%d",&rows);

    printf("Enter the number of columns\n");
    scanf("%d",&cols);

    int arr[rows][cols];
    int *ptr = *arr;

    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            printf("Enter the %d th row and %d th coloumn element\n",i+1,j+1);
            scanf("%d",ptr);
            ptr++;
        }
    }

    printf("\n");

    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
/* look the double arrays are the oe which will first be linear but after
sorting them in an order we can use it like matrix*/



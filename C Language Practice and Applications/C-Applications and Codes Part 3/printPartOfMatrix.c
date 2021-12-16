#include<stdio.h> 

int main(){
    int n;

    printf("Enter the value of n \n");
    scanf("%d",&n);

    int arr[n][n];

    for(int k =0;k<n;k++){
        for(int p =0;p<n;p++){
            printf("Enter the value of %d and %d th element in array\n",k,p);
            scanf("%d",&arr[k][p]);
        }
    }

    for(int i =(n/2);i<n;i++){
        for(int j=0;j<(n/2);j++){
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }
    return 0;
}

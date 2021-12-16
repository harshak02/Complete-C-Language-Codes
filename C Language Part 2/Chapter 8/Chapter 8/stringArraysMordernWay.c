#include<stdio.h>
void print_array(int n,char arr[n][100]){
    for(int i =0;i<n;i++){
        printf("the %d element in the array is %s \n",i+1,arr[i]);
    }

} 

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    char arr[n][100];

    for(int i =0;i<n;i++){
        printf("Enter the %d element in the array \n",i+1);
        scanf("%s",arr[i]);
    }

    print_array(n,arr);

    // for(int i =0;i<n;i++){
    //     printf("the %d element in the array is %s \n",i+1,arr[i]);
    // }



    return 0;
}

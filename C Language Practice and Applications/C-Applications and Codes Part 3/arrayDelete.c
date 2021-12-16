#include<stdio.h>

void delete(int *ptr,int num,int num2){

    int temp;

    int arr1[num-1];
    int *ptr1 = arr1;

    for (int i =0;i<num;i++){
        if((*ptr+i)==num2){
            temp = i;
            break;
        }
    }

    int count = 0;

    for (int j = 0;j<temp;j++){

        *(ptr1+j) = *(ptr+j);
        count++;
    }

    for (int k =(count);k<num;k++){
        *(ptr1+k) = *(ptr+(k+1));
    }

    for (int i =0;i<(num-1);i++){
        printf("%d ",*(ptr1+i));

    }


}

int main(){

    int num;

    printf("Enter the number of elements in the array \n");
    scanf("%d",&num);

    int arr[num];
    int *ptr = arr;

    for (int i =0;i<num;i++){
        printf("Enter the %d element in array \n",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i =0;i<num;i++){
        printf("%d ",arr[i]);

    }

    printf("\n");

    int num2;

    printf("Enter the number to delete \n");
    scanf("%d",&num2);

    delete (ptr,num,num2);


    return 0;
}

//in case of arrays no need to return something it will automaticaly
// return everything

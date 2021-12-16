#include<stdio.h> 

int main(){
    int arr[5] = {1,2,-3,-4,-5};
    int number;
    int number_of_positive_elements;
    number_of_positive_elements = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>=0){
            printf("The %d is positive term in the array \n",arr[i]);
        

        number_of_positive_elements++;

        }

    }

    printf("The number of positive values of the array is %d \n",number_of_positive_elements);
    return 0;
}

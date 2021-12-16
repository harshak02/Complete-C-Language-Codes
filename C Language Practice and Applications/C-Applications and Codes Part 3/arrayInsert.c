#include<stdio.h> 

void insert (int *ptr,int num,int num2,int num3){

    int temp;

    temp = *(ptr+(num2-1));
    *(ptr+(num2-1)) = num3;

    int arr1[num+1];

    int count = 0;
    for (int i =0;i<num2;i++){

        arr1[i] = *(ptr+i);
        count++;
    }

    arr1[count] = temp;
    count++;

    int temp2;

    for (int j = count;j<(num+1);j++){

        arr1[j] = *(ptr+(j-1));

    }

    for (int i=0;i<(num+1);i++){

        printf("%d ",arr1[i]);
    }



}

int main(){
    
    int num; 

    printf("Enter the number of elments in array \n");
    scanf("%d",&num);

    int arr[num];
    int *ptr = arr;

    for (int i=0;i<num;i++){

        fflush(stdin);
        int temp;
        printf("Enter the %d element of the array \n",i+1);
        scanf("%d",&temp);

        arr[i] = temp;
    }

    printf("The inital array is as follows :\n");

    for (int i=0;i<num;i++){

        printf("%d ",arr[i]);
    }

    printf("\n");

    int num2;
    int num3;

    printf("Enter the location to get added \n");
    scanf("%d",&num2);

    printf("Enter the number to get added \n");
    scanf("%d",&num3);

    insert (ptr,num,num2,num3);


    
    return 0;
}

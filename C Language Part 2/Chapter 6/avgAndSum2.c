// #include<stdio.h>

// void sumAndAvg(int a, int b, int *sum, float *avg){
//     *sum = a +b;
//     *avg = (float)(*sum)/2;
// }

// int main(){
//     int i, j, sum;
//     float avg;
//     i = 3;
//     j = 6;
//     sumAndAvg(i, j, &sum, &avg);
//     printf("The value of sum is %d \n", sum);
//     printf("The value of avg is %f \n", avg);
    
//     return 0;


#include<stdio.h> 
void sumavg(int a,int b,float *avg,int *sum){
    *sum = a+b;
    *avg =(float)(*sum)/2;
}

int main(){
    int a = 3;
    int b = 4;
    int sum;
    float avg;
    sumavg(a,b,&avg,&sum);
    printf("The value of the sum of two numbers is %d \n",sum);
    printf("The value of the avg of two numbers is %f \n",avg);
    
    return 0;
}


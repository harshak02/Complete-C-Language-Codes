// #include<stdio.h>

// typedef struct complex{
//     int real;
//     int complex;
// }comp;

// void display(comp c){
//     printf("The value of real part is %d\n", c.real);
//     printf("The value of Imaginary part is %d\n", c.complex);
// }

// int main(){
//     comp cnums[5];
//     for(int i=0; i<5; i++){
//         printf("Enter the real value for %d num\n", i+1);
//         scanf("%d", &cnums[i].real);

//         printf("Enter the complex value for %d num\n", i+1);
//         scanf("%d", &cnums[i].complex);
//     }
//     for(int i=0; i<5; i++){
//         display(cnums[i]);
//     }
//     return 0;
// }

#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}comp; 

void display(comp cnums[5]){

    for(int i=0;i<5;i++){
        printf("The real value of the %d complex number is %d\n",i+1,cnums[i].real);
        printf("The imaginary value of the %d complex number is %d\n",i+1,cnums[i].complex);
    }


}

int main(){
    comp cnums[5];

    for(int i=0;i<5;i++){
        printf("Enter the value of x argument of %d th complex number \n",(i+1));
        scanf("%d",&cnums[i].real);

        printf("Enter the value of y argument of %d th complex number \n",(i+1));
        scanf("%d",&cnums[i].complex);

    }

    for(int i = 0;i<5;i++){
        display(cnums);

    }

    

    return 0;
}
// if we use for keyword and inside that function then no need to mention abt i in the above function prototype
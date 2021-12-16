#include<stdio.h> 

int main(){
     int radius;
     // the code which gives us the area of the circel and volume of the cylinder if height h is given
     int height;
     float pi=3.14,area;
     printf("The value of the radius is \n");
     scanf("%d",&radius);

     printf("The value of the height of cylinder is \n");
     scanf("%d",&height);

     printf("The area of the circle is %f \n",pi*radius*radius);
     printf("The volume of the cylinder is %f",pi*radius*radius*height);

     return 0;
}
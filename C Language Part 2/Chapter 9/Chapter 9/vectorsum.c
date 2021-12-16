#include<stdio.h>
struct vector{
    int x;
    int y;
};

struct vector vectorsum(struct vector v1,struct vector v2){
    struct vector result;
    result.x = v1.x+v2.x;
    result.y = v1.y+v2.y;

    return result;
}

int main(){
    struct vector v1,v2;
    struct vector result;

    v1.x = 2;
    v2.x = 3;
    v1.y = 4;
    v2.y = 5;

    result = vectorsum(v1,v2);

    printf("The value of the x dim is %d and y dim is %d",result.x,result.y);
    
    return 0;
}
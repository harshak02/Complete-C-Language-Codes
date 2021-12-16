#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}vec;

vec sumVector(vec v1,vec v2){
    vec result;

    result.x = v1.x+v2.x;
    result.y = v1.y+v2.y;
    return result;
}

int main(){
    vec v1, v2;
    vec result;

    v1.x = 4;
    v1.y = 9;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 5;
    v2.y = 4;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    result = sumVector(v1, v2);
    printf("X dim of result is %d and Y dim is %d\n", result.x, result.y);
    return 0;

}


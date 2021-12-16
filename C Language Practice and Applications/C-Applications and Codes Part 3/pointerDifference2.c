#include <stdio.h>

int main()
{
    int arr[15];
    arr[1]=5;
    arr[0]=2;
    int diff = (char *)&arr[1] - (char *)&arr[0];
    int diff2 = &arr[1] - &arr[0];
    printf("%d\n%d", diff, diff2);

    return 0;
}

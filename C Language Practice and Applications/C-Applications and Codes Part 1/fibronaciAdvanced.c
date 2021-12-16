#include <stdio.h>

int fib(int a, int b, int c, int n)
{
    int result;

    if (n == 1)
    {
        result = a;
        return result;
    }

    if (n == 2)
    {
        result = b;
        return result;
    }

    if (n == 3)
    {
        result = c;
        return result;
    }

    else
    {
        result = fib(a, b, c, n - 1) + fib(a, b, c, n - 2) + fib(a, b, c, n - 3);
        return result;
    }

}

int main()
{
    int n, a, b, c;
    int result;

    printf("Enter the n value :\n");
    scanf("%d", &n);

    printf("Enter the value of a,b,c :\n");
    scanf("%d%d%d", &a, &b, &c);

    result = fib(a, b, c, n);

    printf("The answer is %d\n", result);

    return 0;
}
//in recursion write the return result in each case seperately
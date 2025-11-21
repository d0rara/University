// Program to print the fibonacci series

#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, next;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
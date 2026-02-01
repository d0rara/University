// Program to find the fibonacci series using a function

#include <stdio.h>

int fib(int n);
int main()
{
    int n;

    // Asking the user to enter number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Printing Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}

// Function to return nth Fibonacci number using recursion
int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

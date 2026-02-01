// Program to calculate factorial of a number using recursion

#include <stdio.h>

int factorial(int n);
int main(void)
{
    int number;

    // Get a non-negative integer from the user
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
    }
    while (number < 0);

    // Calculate factorial
    int result = factorial(number); 

    // Print the result
    printf("Factorial of %i is %i\n", number, result);
}

int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}
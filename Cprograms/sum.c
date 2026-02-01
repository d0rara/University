// Program to find sum of digits using a function

#include <stdio.h>

int sum_digits(int n);
int main()
{
    int n;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Displaying sum of digits
    printf("Sum of digits = %d\n", sum_digits(n));

    return 0;
}

// Function to calculate sum of digits using recursion
int sum_digits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}
// Program to find sum of natural numbers from 1 to n

#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Asking the user to enter the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Loop to calculate sum of natural numbers from 1 to n
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }

    // Displaying the result
    printf("Sum of natural numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
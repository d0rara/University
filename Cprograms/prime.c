// Program to find prime numbers

#include <stdio.h>

int main()
{
    int n, flag = 1;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking divisibility from 2 to n/2
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;   // number is not prime
            break;      // no need to check further
        }
    }

    // Checking and displaying result
    if (flag == 1 && n > 1)
        printf("The number is a Prime number.\n");
    else
        printf("The number is NOT a Prime number.\n");

    return 0;
}
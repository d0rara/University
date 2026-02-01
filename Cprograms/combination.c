// Program to do Combination

#include <stdio.h>

long fact(int n);
int main()
{
    int n, r;
    long result;

    // Asking the user to enter values of n and r
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    // Checking for valid input
    if (n < r)
    {
        printf("Invalid input! n must be greater than or equal to r.\n");
        return 0;
    }

    // Calculating combination C(n, r)
    result = fact(n) / (fact(r) * fact(n - r));

    // Displaying the result
    printf("Combination C(%d, %d) = %ld\n", n, r, result);

    return 0;
}

// Function to calculate factorial of a number
long fact(int n)
{
    long f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}
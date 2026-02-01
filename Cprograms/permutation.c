// Program to find permutation

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

    // Calculating permutation nPr
    result = fact(n) / fact(n - r);

    // Displaying the result
    printf("Permutation (nPr) = %ld\n", result);

    return 0;
}

// Function to calculate factorial of a number
long fact(int n)
{
    long f = 1;
    
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}
// Program to find the armstrong number using a function

#include <stdio.h>

int armstrong(int n, int t, int s);
int main()
{
    int n;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking and displaying result
    if (armstrong(n, n, 0))
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is NOT an Armstrong number.\n");

    return 0;
}

// Function to check Armstrong number using recursion
int armstrong(int n, int t, int s)
{
    if (t == 0)
        return (s == n);   // return 1 if Armstrong, else 0

    int d = t % 10;        // extract last digit
    return armstrong(n, t / 10, s + (d * d * d));
}
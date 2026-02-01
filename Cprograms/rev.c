// Program to print the reverse of a number using a function

#include <stdio.h>

int reverse(int n, int r);
int main()
{
    int n;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling function and displaying reversed number
    printf("Reversed number = %d\n", reverse(n, 0));

    return 0;
}

// Function to reverse a number using recursion
int reverse(int n, int r)
{
    if (n == 0)
        return r;
    else
        return reverse(n / 10, (r * 10) + (n % 10));
}
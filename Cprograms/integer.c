// Program to find first and last digit of a n-digit positive integer

#include <stdio.h>

int main(void)
{
    int n, first, last;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Finding the last digit
    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    // Now n contains the first digit
    first = n;

    // Displaying the result
    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);

    return 0;
}
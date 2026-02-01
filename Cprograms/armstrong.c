// Program to find armstrong

#include <stdio.h>

int main()
{
    int n, temp, d, sum = 0;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store original number in temporary variable
    temp = n;

    // Loop to calculate sum of cubes of digits
    while (t != 0)
    {
        d = t % 10;           // extract last digit
        sum = sum + (d * d * d); // cube of digit
        temp = temp / 10;           // remove last digit
    }

    // Checking whether number is Armstrong or not
    if (sum == n)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is NOT an Armstrong number.\n");

    return 0;
}
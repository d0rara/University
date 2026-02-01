// Program to print sum of digits of a number

#include <stdio.h>

int main()
{
    int n, sum = 0;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate sum of digits
    while (n != 0)
    {
        sum = sum + (n % 10); 
        n = n / 10;            
    }

    // Displaying the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
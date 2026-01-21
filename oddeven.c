// Program to find odd and even numbers

#include <stdio.h>

int main(void)
{
    int num;

    // Prompt user for an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check for even
    if (num % 2 == 0)
    {
        printf("The number %d is even.\n", num);
    }
    else
    {
        printf("The number %d is odd.\n", num);
    }
}
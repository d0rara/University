// Program that compares two integers

#include <stdio.h>

int main(void)
{
    int a, b;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Compare the two numbers
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is less than %d\n", a, b);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}
// Program to print the reverse a number

#include <stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;
    do
    {
        reversed = reversed * 10 + num % 10;  // append last digit
        num /= 10;
    }

    while (num > 0);
    {
        printf("Reversed number of %d is %d\n", original, reversed);
        return 0;
    }

}
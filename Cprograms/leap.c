// Program to find whether a year is a leap year

#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter a Year: ");
    scanf("%d", &year);

    // To find if it is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year is a leap year!\n");
    }
    else
    {
        printf("The year is not a leap year!\n");
    }

    return 0;
}
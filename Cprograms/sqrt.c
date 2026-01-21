// Program to find the square root of a number

#include <math.h>
#include <stdio.h>

int main(void)
{
    double num;
    
    // Prompt user for input
    printf("Enter a number: ");
    scanf("%lf", &num);

    double result = sqrt(num);
    printf("The square root of %.2lf is %.2lf\n", num, result);
}
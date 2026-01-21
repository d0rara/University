// Program to apply the arithmetic operator in C

#include <stdio.h>

int main(void)
{
    int a, b;

    // Prompt user for two integers
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    // Sum
    int sum = a + b;
    printf("The sum of %d and %d is %d\n",a, b, sum);

    // Differenece
    int diff = a - b;
    printf("The difference of %d and %d is %d\n", a, b, diff);

    // Product
    int product = a * b;
    printf("The product of %d and %d is %d\n",a, b, product);

    // Division
    int divide = a / b;
    printf("%d divided by %d is %d\n", a, b, divide);

}
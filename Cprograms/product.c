// Program to print the product of two integers

#include <stdio.h>

int main(void)
{
    int a, b, product;

    // Prompt user for two integers
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    product = a*b;
    printf("The product of %d and %d is %d\n",a, b, product);
}
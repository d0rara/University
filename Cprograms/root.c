// Program to find if a quadratic equation has real roots

#include <stdio.h>

int main()
{
    float a, b, c, d;

    // Asking the user to enter coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculating the discriminant
    d = (b * b) - (4 * a * c);

    // Checking the nature of roots
    if (d > 0)
        printf("The quadratic equation has two distinct real roots.\n");
    else if (d == 0)
        printf("The quadratic equation has two equal real roots.\n");
    else
        printf("The quadratic equation has no real roots.\n");

    return 0;
}
// Program to find the area of a right angled triangle

#include <stdio.h>

int main(void)
{
    int base, height;

    // Prompt user for base
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    // Prompt user for height
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Area = 1/2*base*height
    float area = 0.5*(base*height);
    printf("The area of the right angled triangle is %.2f\n", area);
}
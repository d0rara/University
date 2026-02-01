// Program to find the area and perimeter of a circle

#include <stdio.h>

int main()
{
    float r, area, perimeter;

    // Asking the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // Calculating area of the circle
    area = 3.14 * r * r;

    // Calculating perimeter (circumference) of the circle
    perimeter = 2 * 3.14 * r;

    // Displaying the results
    printf("Area of the circle = %.2f\n", area);
    printf("Perimeter of the circle = %.2f\n", perimeter);

    return 0;
}
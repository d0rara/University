#include <stdio.h>

int main()
{
    float r;        // variable to store radius of the circle
    float area;     // variable to store area
    float perimeter; // variable to store perimeter (circumference)

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
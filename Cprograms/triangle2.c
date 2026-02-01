// Program to area of a triangle whose 3 sides are given

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    
    // Asking the user to enter the three sides
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculating the semi-perimeter
    s = (a + b + c) / 2;

    // Calculating the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Displaying the result
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
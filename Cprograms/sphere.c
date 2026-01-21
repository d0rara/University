// Program to find the volume and area of a sphere

#include <stdio.h>

int main(void)
{
    const float pi = 3.14;
    float radius, volume, area;

    // Prompt user for radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Volume of a sphere is V = 4/3*pi*r*r*r
    volume = 4/3*pi*radius*radius*radius;
    printf("The volume of the sphere is %.02f\n", volume);

    // Area of a sphere is A = 4*pi*r*r
    area = 4*pi*radius*radius;
    printf("The area of the sphere is %.02f\n", area);

}
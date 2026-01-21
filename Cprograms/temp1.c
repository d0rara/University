// Program to convert temperature from fahrenheit to celsius

#include <stdio.h>

int main(void)
{
    float c, f;

    // Prompt user for temperature
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5/9;
    printf("The temperature in Celsius: %.2f°C\n", c);
}
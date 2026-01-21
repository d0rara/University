// Program to convert the temperature from celsius to fahrenheit

#include <stdio.h>

int main(void)
{
    float c,f;

    // Prompt user for temperature
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;
    printf("The temperature in fahrenheit: %.2f°F\n", f);
}
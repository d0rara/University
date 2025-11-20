// Program to convert temperature from celsius to farenheit and vice versa

#include <stdio.h>

int main() {
    float temp, convertedTemp;
    int choice;

    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedTemp = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", convertedTemp);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedTemp = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f°C\n", convertedTemp);
    } 
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
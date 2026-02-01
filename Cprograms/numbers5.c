// Program to find the sum and average of decimal numbers

#include <stdio.h>

int main()
{
    int n;
    float x, avg, sum = 0.0;
    
    // Asking the user how many numbers they want to enter
    printf("Enter the number of decimal values: ");
    scanf("%d", &n);

    // Loop to read decimal numbers and calculate sum
    for (int i = 0; i < n; i++)
    {
        printf("Enter decimal number %d: ", i + 1);
        scanf("%f", &x);
        sum = sum + x;
    }

    // Calculating average
    avg = sum / n;

    // Displaying the result
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
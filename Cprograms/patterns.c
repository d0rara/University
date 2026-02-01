// Program to generate patterns

#include <stdio.h>

int main()
{
    int n;

    // Asking the user to enter number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop for printing stars
        for (int j = 0; j <i; j++)
        {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
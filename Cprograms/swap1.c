// Program to swap two integers using a temporary variable

#include <stdio.h>

int main() 
{
    int a, b, temp;

    // Input numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
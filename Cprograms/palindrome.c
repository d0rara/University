// Program to find palindrome

#include <stdio.h>

int main()
{
    int n, temp, rev = 0;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Store original number in temporary variable
    temp = n;

    // Loop to reverse the number
    while (temp != 0)
    {
        rev = (rev * 10) + (temp % 10); // build reversed number
        temp = temp / 10;                  // remove last digit
    }

    // Checking whether number is palindrome
    if (rev == n)
        printf("The number is a Palindrome.\n");
    else
        printf("The number is NOT a Palindrome.\n");

    return 0;
}
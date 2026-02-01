// Program to print the ASCII values from A to Z

#include <stdio.h>

int main()
{
    char c;

    // Loop from character 'A' to 'Z'
    for (c = 'A'; c <= 'Z'; c++)
    {
        // Printing character and its ASCII value
        printf("%c = %d\n", c, c);
    }

    return 0;
}
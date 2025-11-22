// Program to print the length of a string
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "Hello";
    char str2[20] = "World";
    char str3[5] = " ";

    strcat(str1, str3); // Add space after "Hello"
    strcat(str1, str2); // Then add "World"

    printf("Length: %lu\n", strlen(str1));
    printf("Result: %s\n", str1);
}
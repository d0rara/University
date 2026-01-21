// Program to find the arithmetic progression

#include <stdio.h>

int main(void)
{
    int n;

    // Prompt user for n
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Arithmetic Progression: \n");

    for (int i = 0; i <=n; i++)
    {
        printf("%d\n", 2*i);
    }
}
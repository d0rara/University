// Program to find maximum and minimum among three numbers
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a, min = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    if (b < min)
        min = b;
    if (c < min)
        min = c;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
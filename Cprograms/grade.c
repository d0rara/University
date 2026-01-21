// Program to print the grades of a student

#include <stdio.h>

int main(void)
{
    float m1, m2, m3, m4, m5, m6;
    float total, percentage;

    // Accept marks for six questions
    printf("Enter marks for Question 1: ");
    scanf("%f", &m1);

    printf("Enter marks for Question 2: ");
    scanf("%f", &m2);

    printf("Enter marks for Question 3: ");
    scanf("%f", &m3);

    printf("Enter marks for Question 4: ");
    scanf("%f", &m4);

    printf("Enter marks for Question 5: ");
    scanf("%f", &m5);

    printf("Enter marks for Question 6: ");
    scanf("%f", &m6);

    // Total marks and percentage
    total = m1 + m2 + m3 + m4 + m5 + m6;
    percentage = (total / 60) * 100;

    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%\n", percentage);

    // Grade calculation
    if (percentage >= 90.0)
        printf("Grade: O\n");
    else if (percentage >= 80.0)
        printf("Grade: A+\n");
    else if (percentage >= 70.0)
        printf("Grade: A\n");
    else if (percentage >= 60.0)
        printf("Grade: B+\n");
    else if (percentage >= 50.0)
        printf("Grade: B\n");
    else if (percentage >= 40.0)
        printf("Grade: C\n");
    else
        printf("Grade: P\n");

    return 0;
}
#include <stdio.h>

int main()
{
    int marks[5], i, total = 0;
    float percentage;
    char grade;

    printf("Enter marks of 5 subjects (out of 100 each):\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}

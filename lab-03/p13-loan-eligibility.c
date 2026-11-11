/*
 * Lab 3.13 - Eligible for a loan (age and income)
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 28, 480000
 * Sample output: The person is not eligible for a loan.
 */
#include <stdio.h>

int main() {
    int age, income;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter income (in Rs.): ");
    scanf("%d", &income);
    if (age > 20 && age < 70 && income > 500000)
        printf("The person is eligible for a loan.");
    else
        printf("The person is not eligible for a loan.");
    return 0;
}

/*
 * Lab 1.1 - Sum of two numbers
 * FOCP Lab 1 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 120 235
 * Sample output: The sum of 120 and 235 is 355
 */
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d", a, b, a + b);
    return 0;
}

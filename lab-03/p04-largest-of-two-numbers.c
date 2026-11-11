/*
 * Lab 3.4 - Largest of two numbers
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 64 88
 * Sample output: 88 is the largest.
 */
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is the largest.", a);
    else if (b > a)
        printf("%d is the largest.", b);
    else
        printf("Both numbers are equal.");
    return 0;
}

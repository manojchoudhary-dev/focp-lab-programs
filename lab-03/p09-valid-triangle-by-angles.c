/*
 * Lab 3.9 - Valid triangle by angles
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 60 70 50
 * Sample output: The triangle is valid.
 */
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");
    return 0;
}

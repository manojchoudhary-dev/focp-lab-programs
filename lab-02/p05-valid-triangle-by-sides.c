/*
 * Lab 2.5 - Valid triangle by sides
 * FOCP Lab 2 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 7 10 9
 * Sample output: They can form a valid triangle.
 */
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
        printf("They can form a valid triangle.");
    else
        printf("They cannot form a valid triangle.");
    return 0;
}

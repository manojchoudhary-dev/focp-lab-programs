/*
 * Lab 1.6 - Grade from marks
 * FOCP Lab 1 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 68
 * Sample output: Grade: C
 */
#include <stdio.h>

int main() {
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);
    if (m >= 90)
        printf("Grade: A");
    else if (m >= 75)
        printf("Grade: B");
    else if (m >= 60)
        printf("Grade: C");
    else
        printf("Grade: D");
    return 0;
}

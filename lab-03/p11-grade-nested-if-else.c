/*
 * Lab 3.11 - Grade using nested if-else (A/B/C/D/Fail)
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 72
 * Sample output: Grade: C
 */
#include <stdio.h>

int main() {
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);
    if (m >= 60) {
        if (m >= 90)
            printf("Grade: A");
        else if (m >= 75)
            printf("Grade: B");
        else
            printf("Grade: C");
    } else {
        if (m >= 40)
            printf("Grade: D");
        else
            printf("Grade: Fail");
    }
    return 0;
}

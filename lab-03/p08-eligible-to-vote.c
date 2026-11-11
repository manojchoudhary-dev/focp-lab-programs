/*
 * Lab 3.8 - Eligible to vote (age >= 18)
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 19
 * Sample output: You are eligible to vote.
 */
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You are eligible to vote.");
    else
        printf("You are not eligible to vote.");
    return 0;
}

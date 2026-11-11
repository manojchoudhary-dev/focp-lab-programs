/*
 * Lab 3.18 - Day of the week (1-7)
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 5
 * Sample output: Friday
 */
#include <stdio.h>

int main() {
    int d;
    printf("Enter a number (1-7): ");
    scanf("%d", &d);
    switch (d) {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
        default: printf("Invalid input. Enter a number from 1 to 7.");
    }
    return 0;
}

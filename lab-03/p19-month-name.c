/*
 * Lab 3.19 - Month name (1-12)
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 9
 * Sample output: September
 */
#include <stdio.h>

int main() {
    int m;
    printf("Enter a number (1-12): ");
    scanf("%d", &m);
    switch (m) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Invalid input. Enter a number from 1 to 12.");
    }
    return 0;
}

/*
 * Lab 3.14 - Mini electricity bill calculator
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 120
 * Sample output: Total bill = Rs. 3800
 */
#include <stdio.h>

int main() {
    int units, bill;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units < 100)
        bill = units * 10 + 2000;
    else
        bill = units * 15 + 2000;
    printf("Total bill = Rs. %d", bill);
    return 0;
}

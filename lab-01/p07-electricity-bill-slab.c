/*
 * Lab 1.7 - Electricity bill (slab rates)
 * FOCP Lab 1 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 250
 * Sample output: The Bill is 1550
 */
#include <stdio.h>

int main() {
    int units, bill;
    printf("Enter units: ");
    scanf("%d", &units);
    if (units <= 100)
        bill = units * 5;
    else if (units <= 300)
        bill = 500 + (units - 100) * 7;
    else
        bill = 1900 + (units - 300) * 10;
    printf("The Bill is %d", bill);
    return 0;
}

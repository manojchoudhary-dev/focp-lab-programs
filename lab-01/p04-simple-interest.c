/*
 * Lab 1.4 - Simple interest
 * FOCP Lab 1 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 15000 6 3
 * Sample output: The SI is 2700
 */
#include <stdio.h>

int main() {
    int p, r, t, si;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("The SI is %d", si);
    return 0;
}

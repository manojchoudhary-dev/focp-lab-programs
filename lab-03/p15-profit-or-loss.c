/*
 * Lab 3.15 - Profit or loss
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 2500, 2100
 * Sample output: Loss = Rs. 400
 */
#include <stdio.h>

int main() {
    int cp, sp;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    if (sp > cp)
        printf("Profit = Rs. %d", sp - cp);
    else if (cp > sp)
        printf("Loss = Rs. %d", cp - sp);
    else
        printf("No profit, no loss.");
    return 0;
}

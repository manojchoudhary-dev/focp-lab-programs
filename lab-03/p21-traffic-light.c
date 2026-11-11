/*
 * Lab 3.21 - Traffic light instruction
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 2
 * Sample output: Yellow: Wait
 */
#include <stdio.h>

int main() {
    int c;
    printf("Enter color code (1=Red 2=Yellow 3=Green): ");
    scanf("%d", &c);
    switch (c) {
        case 1: printf("Red: Stop"); break;
        case 2: printf("Yellow: Wait"); break;
        case 3: printf("Green: Go"); break;
        default: printf("Invalid color code.");
    }
    return 0;
}

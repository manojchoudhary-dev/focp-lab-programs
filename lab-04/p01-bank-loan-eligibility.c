/*
 * Lab 4.1 - Bank loan eligibility and interest rate
 * FOCP Lab 4 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 30, 4000, 720, choice 2
 * Sample output: Eligibility Status: Eligible / Loan Type: Car Loan / Interest Rate: 8.0%
 */
#include <stdio.h>

int main() {
    int age, score, choice;
    float salary, rate = 0;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly salary ($): ");
    scanf("%f", &salary);
    printf("Enter credit score: ");
    scanf("%d", &score);
    if (age >= 21 && age <= 60 && salary * 12 >= 30000 && score >= 600) {
        printf("Select Loan Type:\n");
        printf("1. Home Loan\n2. Car Loan\n3. Personal Loan\n4. Education Loan\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        printf("Eligibility Status: Eligible\n");
        switch (choice) {
            case 1: printf("Loan Type: Home Loan\n"); rate = 6.5; break;
            case 2: printf("Loan Type: Car Loan\n"); rate = 8; break;
            case 3: printf("Loan Type: Personal Loan\n"); rate = 10; break;
            case 4: printf("Loan Type: Education Loan\n"); rate = 5; break;
            default: printf("Invalid loan type selected.\n");
        }
        if (choice >= 1 && choice <= 4)
            printf("Interest Rate: %.1f%%", rate);
    } else {
        printf("Eligibility Status: Not Eligible");
    }
    return 0;
}

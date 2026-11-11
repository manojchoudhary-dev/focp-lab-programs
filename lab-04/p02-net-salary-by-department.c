/*
 * Lab 4.2 - Net salary by department and service
 * FOCP Lab 4 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 45000, Sales, 5
 * Sample output: Base Salary : 45000.00 / Allowance : 6750.00 / Deduction : 0.00 / Net Salary : 51750.00
 */
#include <stdio.h>
#include <string.h>

int main() {
    float base, allowance = 0, deduction = 0, net;
    char dept[20];
    int years;
    printf("Enter base salary: ");
    scanf("%f", &base);
    printf("Enter department code (HR/Sales/IT/Finance): ");
    scanf("%s", dept);
    printf("Enter years of service: ");
    scanf("%d", &years);
    if (strcmp(dept, "HR") == 0) {
        if (years > 5) allowance = base * 0.10; else deduction = base * 0.05;
    } else if (strcmp(dept, "Sales") == 0) {
        if (years > 3) allowance = base * 0.15; else deduction = base * 0.07;
    } else if (strcmp(dept, "IT") == 0) {
        if (years > 4) allowance = base * 0.20; else deduction = base * 0.06;
    } else if (strcmp(dept, "Finance") == 0) {
        if (years > 6) allowance = base * 0.12; else deduction = base * 0.04;
    } else {
        printf("Invalid department code.");
        return 0;
    }
    net = base + allowance - deduction;
    printf("Base Salary : %.2f\n", base);
    printf("Allowance : %.2f\n", allowance);
    printf("Deduction : %.2f\n", deduction);
    printf("Net Salary : %.2f", net);
    return 0;
}

/*
 * Lab 3.17 - Calculator using switch case
 * FOCP Lab 3 (CSE-1003) - B.Tech CSE Semester 1, IIIT Bhopal
 *
 * Sample input: 20, 4, choice 3
 * Sample output: Product = 80.00
 */
#include <stdio.h>

int main() {
    float a, b;
    int ch;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter choice (1=Add 2=Sub 3=Mul 4=Div): ");
    scanf("%d", &ch);
    switch (ch) {
        case 1: printf("Sum = %.2f", a + b); break;
        case 2: printf("Difference = %.2f", a - b); break;
        case 3: printf("Product = %.2f", a * b); break;
        case 4:
            if (b != 0)
                printf("Quotient = %.2f", a / b);
            else
                printf("Division by zero is not possible.");
            break;
        default: printf("Invalid choice.");
    }
    return 0;
}

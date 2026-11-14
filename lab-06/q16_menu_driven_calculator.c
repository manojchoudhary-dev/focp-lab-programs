#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Result: %.2f x %.2f = %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else
                    printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

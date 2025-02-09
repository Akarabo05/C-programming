#include <stdio.h>

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    // Subtraction
    result = num1 - num2;

    // Display result
    printf("Result: %d - %d = %d\n", num1, num2, result);

    return 0;
}
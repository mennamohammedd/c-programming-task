#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Arithmetical operations
    printf("Arithmetical Operations:\n");
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);

    // Logical operations
    printf("\nLogical Operations:\n");
    printf("AND: %d\n", num1 && num2);
    printf("OR: %d\n", num1 || num2);
    printf("NOT num1: %d\n", !num1);
    printf("NOT num2: %d\n", !num2);

    // Bitwise operations
    printf("\nBitwise Operations:\n");
    printf("AND: %d\n", num1 & num2);
    printf("OR: %d\n", num1 | num2);
    printf("XOR: %d\n", num1 ^ num2);
    printf("Complement num1: %d\n", ~num1);
    printf("Complement num2: %d\n", ~num2);

    return 0;
}

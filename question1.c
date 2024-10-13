#include <stdio.h>

void printBinary(int num) {
    if (num > 1)
        printBinary(num / 2);
    printf("%d", num % 2);
}

void printOctal(int num) {
    if (num > 7)
        printOctal(num / 8);
    printf("%d", num % 8);
}

void printHexadecimal(int num) {
    if (num > 15)
        printHexadecimal(num / 16);
    int remainder = num % 16;
    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", remainder - 10 + 'A');
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Decimal
    printf("Decimal: %d\n", number);

    // Binary
    printf("Binary: ");
    printBinary(number);
    printf("\n");

    // Octal
    printf("Octal: ");
    printOctal(number);
    printf("\n");

    // Hexadecimal
    printf("Hexadecimal: ");
    printHexadecimal(number);
    printf("\n");

    return 0;
}


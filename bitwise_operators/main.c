#include <stdio.h>

int main() {
    // Example 1: Bitwise AND (&)
    int a = 5;      // Binary: 0101
    int b = 3;      // Binary: 0011
    int result_and = a & b; // Binary: 0001 (1 in decimal)
    printf("Bitwise AND: %d\n", result_and);

    // Example 2: Bitwise OR (|)
    int result_or = a | b;  // Binary: 0111 (7 in decimal)
    printf("Bitwise OR: %d\n", result_or);

    // Example 3: Bitwise XOR (^)
    int result_xor = a ^ b; // Binary: 0110 (6 in decimal)
    printf("Bitwise XOR: %d\n", result_xor);

    // Example 4: Bitwise NOT (~)
    int c = 10;              // Binary: 1010
    int result_not = ~c;     // Binary: 0101 (-11 in two's complement representation)
    printf("Bitwise NOT: %d\n", result_not);

    // Example 5: Left Shift (<<)
    int d = 3;               // Binary: 0011
    int result_left_shift = d << 2; // Binary: 1100 (12 in decimal)
    printf("Left Shift: %d\n", result_left_shift);

    // Example 6: Right Shift (>>)
    int e = 16;              // Binary: 10000
    int result_right_shift = e >> 2; // Binary: 00100 (4 in decimal)
    printf("Right Shift: %d\n", result_right_shift);

    return 0;
}

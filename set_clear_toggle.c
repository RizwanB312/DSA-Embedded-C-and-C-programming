/*
#include <stdio.h>

int main() {
    unsigned char reg = 0x00;  // 8-bit register initialized to 00000000

    int bit_to_set = 2;
    int bit_to_clear = 1;
    int bit_to_toggle = 3;

    // Set bit 2
    reg |= (1 << bit_to_set);
    printf("After setting bit %d:  0x%02X\n", bit_to_set, reg);

    // Clear bit 1
    reg &= ~(1 << bit_to_clear);
    printf("After clearing bit %d: 0x%02X\n", bit_to_clear, reg);

    // Toggle bit 3
    reg ^= (1 << bit_to_toggle);
    printf("After toggling bit %d: 0x%02X\n", bit_to_toggle, reg);

    return 0;
}
*/
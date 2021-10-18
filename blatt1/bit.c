#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

bool is_set(uint8_t value, uint8_t bit) {
    uint8_t mask = 1 << bit;
    return (value & mask) > 0;
}

int main() {
    uint8_t value = 120;
    uint8_t bit = 3;

    printf("Value: %d\n", value);
    if (is_set(value, bit)) {
        value &= ~(1 << bit);
    } else {
        value |= (1 << bit);
    }
    printf("New value: %d\n", value);
}
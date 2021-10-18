#include <stdio.h>
#include <stdint.h>
#include <math.h>

int sine_for() {
    for(uint16_t i = 0; i <= 360; i += 10) {
        double val = sin(i * M_PI / 180);
        printf("%d: %.3f\n", i, val);
    }
}

int sine_while() {
    uint16_t i = 0;
    while(i <= 360) {
        double val = sin(i * M_PI / 180);
        printf("%d: %.3f\n", i, val);
        i++;
    }
}

int main() {
    sine_for();
    sine_while();
}
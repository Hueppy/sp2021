#include <stdio.h>

int main() {
    unsigned int val = 0;
    unsigned int next = 1;
    do {
        val = next;
        next = val + 1;
    } while (next > val);
    printf("%u", val);
}
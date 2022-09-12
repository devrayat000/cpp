#include <stdio.h>
#include <stdbool.h>


// Cheking a number can be expressed as a sum o two prime numbers
int main() {
    int x = 50;
    // Write C code here
    for (int i = 2; i <= x / 2; i++) {
        bool is_prime_first = true, is_prime_second = true;
        int c = 2, d = 2;
        
        for (c = 2; c < i; c++) {
            if (i % c == 0) {
                is_prime_first = false;
                break;
            }
        }
        
        if (is_prime_first) {
            for (d = 2; d < x - i; d++) {
                if ((x - i) % d == 0) {
                    is_prime_second = false;
                    break;
                }
            }
        }
        
        if (is_prime_first && is_prime_second) {
            printf("%d + %d = %d\n", c, d, x);
        }
    }

    return 0;
}
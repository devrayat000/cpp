#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime_l(const int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_r(const int num, int seed) {
    if (seed >= num) return true;
    if (num % seed == 0) {
        return false;
    }
    return prime_r(num, seed + 1);
}

int main() {
    int nums[] = {2, 3, 4, 6, 9, 11, 13, 17, 20};
    
    for (int i = 0; i < 9; i++) {
        printf("%d is prime = %d\n", nums[i], prime_l(nums[i]));
    }
    
    printf("\n\n\n");
    for (int i = 0; i < 9; i++) {
        printf("%d is prime = %d\n", nums[i], prime_r(nums[i], 2));
    }

    return 0;
}
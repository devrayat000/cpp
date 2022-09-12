#include <stdio.h>

void fibonacci_l(int limit) {
    int c1 = 0, c2 = 0, temp;

    for (int i = 0; i < limit; i++) {
        printf("%4d", c2);

        if (c2 == 0) c2++;
        else {
            temp = c2;
            c2 += c1;
            c1 = temp;
        }
    }
}

void fibonacci_r(int limit, int c1, int c2) {
    if (limit == 0) return;
    printf("%4d", c2);

    if (c2 == 0) fibonacci_r(--limit, c2, 1);
    else fibonacci_r(--limit, c2, c1 + c2);
}

int main()
{
    int x = 10;

    fibonacci_l(x);
    printf("\n");
    fibonacci_r(x, 0, 0);
    
    return 0;
}

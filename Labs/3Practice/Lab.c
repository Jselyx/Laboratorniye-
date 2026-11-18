
#include <stdio.h>

int main(void) {
    const int INITIAL_A = 1;
    const int INITIAL_B = 0;

    int a = INITIAL_A;
    int b = INITIAL_B;

    // 1

    const int c = a;
    a = b;
    b = c;

    printf("1: a = %d, b = %d\n", a, b);

    a = INITIAL_A;
    b = INITIAL_B;

    // 2

    a += b;
    b = a - b;
    a -= b;

    printf("2: a = %d, b = %d\n", a, b);

    a = INITIAL_A;
    b = INITIAL_B;

    // 3

    a ^= b;
    b ^= a;
    a ^= b;

    printf("3: a = %d, b = %d\n", a, b);

    a = INITIAL_A;
    b = INITIAL_B;

    // 4

    a = (b = a + b, a = b - a, b = b - a, a);

    printf("4: a = %d, b = %d\n", a, b);

    return 0;
}

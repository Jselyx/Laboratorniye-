#include <stdio.h>
#include <stdint.h>

int main(void) {
    puts("Hello C\n");

    const char letter = 'F';
    const int number = 10;
    const float pi = 3.14;
    const double pi2 = 3.14159;

    printf("%c\n%d\n%.2f\n%lf\n", letter, number, pi, pi2);
    return 0;
}
#include <stdio.h>
#include <stdint.h>

int main(void) {
    const int num_one = 10;
    const int num_two = 4;
    const int num_three = num_one + num_two;

    printf("%d\n", num_three);
    const int del = num_one/num_two;

    {
        float num_one = 10.0;
        float num_two = 4.0;
        const float del_ = num_one/num_two;
        printf("%.1f\n", del_);
    }

    int a = 10;
    int b = 5;
    printf("Sum a+b: %d\n", a+b);
    printf("Average a+b: %.2f\n", (a+b) / 2.0);


    const int first = 15;
    const int second = 7;
    const int third = first % second;



    const float f = 10.0;
    const float s = 3.0;
    const float t = f/s;
    printf("%.3f\n", t);
    return 0;
}
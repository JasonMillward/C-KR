#include <stdio.h>

int main(int argc, const char *argv[]) {
    float f, c;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    printf("Fahrenheit to Celcius\n");
    
    f = lower;
    while (f <= upper) {
        c = (5.0/9.0) * (f - 32.0);
        //       Fahrenheit to Celcius
        printf("%5.0f       %7.1f\n", f, c);
        f = f + step;
    }

    return 0;
}

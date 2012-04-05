#include <stdio.h>

int main(int argc, const char *argv[]) {
    float fahrenheit, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    printf("Fahrenheit   Celcius\n");
    
    fahrenheit = lower;
	
    while (fahrenheit <= upper) {
        celcius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%5.0f       %7.1f\n", fahrenheit, celcius);
        fahrenheit += step;
    }
    return 0;
}
#include <stdio.h>

int main(int argc, const char *argv[]) {
    float fahrenheit, celsius;
    int lower, upper, step;
	
    lower = 0;
    upper = 100;
    step  = 10;
	
	printf("Celsius    Fahrenheit\n");
	
    celsius = lower;
    
    while (celsius <= upper) {
    	fahrenheit = (celsius * (9.0/5.0)) + 32.0;
    	printf("   %5.0f      %7.1f\n", celsius, fahrenheit);
    	celsius += step;
    }
    return 0;    
}

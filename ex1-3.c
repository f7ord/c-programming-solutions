#include <stdio.h>

/* 
Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 using the formula C = (5/9(F-32) 
*/

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr\tCelsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f %9.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}

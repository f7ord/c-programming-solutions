#include <stdio.h>

/* Print Celsius-Fahrenheit table
	for celsius = 0, 20, ..., 300
	F = ((9/5)*c) + 32 */

int main()
{
    float cels, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3s\t%6s\n", "Cels", "Fahr");
    cels = lower;
    while (cels <= upper) {
        fahr = (9.0/5.0) * cels + 32.0;
        printf("%3.0f\t%6.1f\n", cels, fahr);
        cels += step;
    }
    return 0;
}

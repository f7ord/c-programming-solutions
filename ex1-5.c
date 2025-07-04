#include <stdio.h>

/* Print Fahrenheit-Celsius table in reverse
    from 300 to 0*/

int main()
{
    int fahr;

    printf("%3s\t%6s\n", "Fahr", "Cels");
    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    return 0;
}

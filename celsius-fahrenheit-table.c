#include <stdio.h>
/* CPL Section 1.2
Print Celsius-Fahrenheit table for cels = 0, 20, 40, ..., 300*/

int main()
{
    int fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;

    while (cels <= upper)
    {
        fahr = (cels * 9/5) + 32;
        printf("%d\t%d\n", cels, fahr);
        cels = cels + step;
    }
    
}

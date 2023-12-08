#include <stdio.h>
/* CPL Sections 1.3, 1.4
Print Fahrenheit-Celsius table */

#define LOWER   0
#define UPPER   300
#define STEP    20

int main()
{   
    printf("FAHRENHEIT\tCELSIUS\n");
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d\t\t%5.1f\n", fahr, (fahr-32)*5.0/9.0);
    }
}

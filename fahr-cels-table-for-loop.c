#include <stdio.h>
/* Print Fahrenheit-Celsius table */

int main()
{   
    printf("FAHRENHEIT\tCELSIUS\n");
    for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%3d\t\t%5.1f\n", fahr, (fahr-32)*5.0/9.0);
    }
}

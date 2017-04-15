#include <stdio.h>

/* Print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version
 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* Lower limit of temperature table */
    upper = 300;    /* Upper limit */
    step = 20;      /* Step size */

    fahr = lower;
    printf("Fahr|celsius\n");
    printf("----+-------\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f |%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}


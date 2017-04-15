#include <stdio.h>

/* Print Celsius-fahr table
 * for fahr = 0, 20, ..., 300; floating-point version
 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* Lower limit of temperature table */
    upper = 300;    /* Upper limit */
    step = 20;      /* Step size */

    celsius = lower;
    printf("celsius|fahr\n");
    printf("-------+----\n");
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%6.1f |%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}


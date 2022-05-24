#include <stdio.h>

/* print Fahrenheit-Celsius table for f = 0, 20, ..., 300
   floating point version
 */
int main(void)
{
    float f, c;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */

    f = lower;
    while (f <= upper) {
        c = (5.0 / 9.0) * (f - 32.0);
        printf("%3.0f %6.1f\n", f, c);
        f = f + step;
    }
}
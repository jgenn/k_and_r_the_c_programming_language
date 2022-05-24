#include <stdio.h>

/* print Fahrenheit-Celsius table for f = 0, 20, ..., 300 */
int main(void)
{
    int f, c;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */

    f = lower;
    while (f <= upper) {
        c = 5 * (f - 32) / 9;
        printf("%d\t%d\n", f, c);
        f = f + step;
    }
}
#include <stdio.h>

/*  
    Chapter 1, Exercise 1-3
    Modify the temperature conversion program to print a heading
    above the table.

    Prints Fahrenheit-Celsius table for f = 0, 20, ..., 300
   
 */
int main(void)
{
    float f, c;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */

    printf("Fahrenheit    Celsius\n");

    f = lower;
    while (f <= upper) {
        c = (5.0 / 9.0) * (f - 32.0);
        printf("%6.0f %12.1f\n", f, c);
        f = f + step;
    }
}
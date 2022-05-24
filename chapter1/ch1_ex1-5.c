#include <stdio.h>

/*  
    Chapter 1, Exercise 1-5
    Modify the temperature conversion program to print the table
    in reverse order.

    Prints Fahrenheit-Celsius table for f = 300 280, ..., 0
   
 */
int main(void)
{
    float f, c;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */

    printf("Fahrenheit    Celsius\n");

    f = upper;
    while (f >= lower) {
        c = (5.0 / 9.0) * (f - 32.0);
        printf("%6.0f %12.1f\n", f, c);
        f = f - step;
    }
}
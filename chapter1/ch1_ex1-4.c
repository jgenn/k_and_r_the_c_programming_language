#include <stdio.h>

/*  
    Chapter 1, Exercise 1-4
    Write a program to print the corresponding Celsius to 
    Fahrenheit table.

    Prints Celsius-Fahrenheit table for f = 0, 20, ..., 300
   
 */
int main(void)
{
    float f, c;
    int lower, upper, step;

    lower = 0;     /* lower limit of temperature table */
    upper = 300;   /* upper limit */
    step = 20;     /* step size */

    printf("Celsius    Fahrenheit\n");

    f = lower;
    while (f <= upper) {
        c = (5.0 / 9.0) * (f - 32.0);

        // the only modifications necessary to print the corresponding
        // table is to swap the variables, and correct the header.
        printf("%6.1f %10.0f\n", c, f);  // and don't forget to swap precisions
        f = f + step;
    }
}
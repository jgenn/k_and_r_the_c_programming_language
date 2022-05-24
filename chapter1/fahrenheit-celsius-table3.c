#include <stdio.h>

/*  
    Fahrenheit to Celsius table, for loop version.

    Prints Fahrenheit-Celsius table for f = 0, 20, ..., 300
   
 */
int main(void)
{
    int f;
    for (f = 0; f <= 300; f += 20)
        printf("%3d %6.1f\n", f, (5.0/9.0) * (f - 32));
}
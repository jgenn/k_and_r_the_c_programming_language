#include <stdio.h>

#define LOWER  0       /* lower limit of table */
#define UPPER  300     /* upper limit */
#define STEP   20      /* step size */

/*  
    Fahrenheit to Celsius table, symbolic constants version.

    Prints Fahrenheit-Celsius table for f = 0, 20, ..., 300
   
 */
int main(void)
{
    printf("Fahrenheit    Celsius\n");

    int f;
    for (f = LOWER; f <= UPPER; f += STEP)
        printf("%6d %12.1f\n", f, (5.0/9.0) * (f - 32));
}
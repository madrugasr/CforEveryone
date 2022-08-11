/*
    Proof
    The following program is suppose to use the sin()
    function in the math library and write out an input's absolute value over an interval.
    So for example if sine(0.6)  is 0.564 then its absolute value is the same (0.564).
    But if sine(2.4)  is -0.675 then its absolute value is 0.675.
    7, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>
#include <math.h> // has  sin(), abs(), and fabs() 

int main(void)
{
    for (int i = 1; i <= 30; i++)
    {
        double interval = i / 10.0;
        printf("\nSin (%d) (%.3lf) : %.5lf\n", i, interval, fabs(sin(interval)));        
    }

    return 0;
}
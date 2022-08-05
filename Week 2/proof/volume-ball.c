/*
    Volume Of A Ball
    4, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float radius, volume;
    printf("\nVolume of a Ball\n");
    printf("\nEnter the radius of the Ball: ");
    scanf("%f", &radius);
    // volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    printf("\nThe volume of the Ball is %g", volume = 1.3 * 3.14 * pow(radius, 3));
    printf("\n%g", pow(10, 3));
    return 0;
}

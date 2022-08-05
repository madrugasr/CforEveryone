/*
    Sine
    4, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float radians, angle, sine;
    printf("\nSINE\n");
    printf("\nEnter the Angle: ");
    scanf("%f", &angle);

    radians = angle * (3.1415 / 180); // Convert Degrees to Radians
    sine = sin(radians);              // Calculate Sine

    printf("The Sine of Angle %g degrees is %g", angle, sine);
    return 0;
}

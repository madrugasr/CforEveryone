/*
    SINE COSINE
    7, Algust, 2020
    Daniel Marques
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(int argc, char const *argv[])
{
    short option;
    float angle;
    printf("\nSEN-COSEN\n");
    printf("\n1. Sen");
    printf("\n2. Cos\n");
    printf("\nChoose an option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("\nEnter a Angle: ");
        scanf("%f", &angle);
        printf("\nThe Sen of %.2f is %.2f", angle, sin(angle * PI / 180));
        break;
    case 2:
        printf("\nEnter a Angle: ");
        scanf("%f", &angle);
        printf("\nThe Cos of %.2f is %.2f", angle, cos(angle * PI / 180));
        break;
    default:
        printf("\nInvalid option");
        break;
    }
    return 0;
}

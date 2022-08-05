/*
    FLOATING POINT TYPES
    A Fundamental Type
    4, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nFLOATING POINT TYPES\n");
    printf("\nThe value FLOAT have %d bytes", sizeof(float));
    printf("\nThe value DOUBLE have %d bytes", sizeof(double));
    printf("\nThe value LONG DOUBLE have size of %g.", sizeof(long double));
    return 0;
}

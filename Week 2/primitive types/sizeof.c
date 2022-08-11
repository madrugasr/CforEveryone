/*
    Size of The Value Types
    The sizeof operator returns the size of a value type in bytes.
    4, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nSIZE OF THE VALUE TYPES\n");
    printf("\nThe value INT have %d bytes", sizeof(int));
    printf("\nThe value FLOAT have %d bytes", sizeof(float));
    printf("\nThe value DOUBLE have %d bytes", sizeof(double));
    printf("\nThe value LONG DOUBLE have %d bytes", sizeof(long double));
    printf("\nThe value CHAR have %d bytes", sizeof(char));
    printf("\nThe value LONG have %d bytes", sizeof(long));
    printf("\nThe value LONG LONG have %d bytes", sizeof(long long));
    printf("\nThe value SHORT have %d bytes", sizeof(short));
    printf("\nThe value UNSIGNED have %d bytes", sizeof(unsigned));

    printf("\n\nTHE VALUE IN BYTES OF VARIABLES\n");
    int a;
    float b;
    double c;
    long double d;
    char e;
    long f;
    long long g;
    short h;
    unsigned i;
    printf("\n%d", sizeof(a));
    printf("\n%d", sizeof(b));
    printf("\n%d", sizeof(c));
    printf("\n%d", sizeof(d));
    printf("\n%d", sizeof(e));
    printf("\n%d", sizeof(f));
    printf("\n%d", sizeof(g));
    printf("\n%d", sizeof(h));
    printf("\n%d", sizeof(i));

    return 0;
}

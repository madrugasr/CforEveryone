/*
    INTEGER TYPES
    A Fundamental Type
    4, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nINTEGER TYPES\n");

    short short_a = 2;
    int int_a = 2;
    unsigned unsigned_a = 2u;
    long long_a = 2l;
    printf("\n%hd divide by int 2 is %d\n", short_a, short_a / 2);
    printf("%hd divide by float 1 is %lf\n", short_a, short_a / 1.0);
    printf("%d as char is %c\n", int_a, int_a);
    printf("Size in bytes of Short, Int, Unsigned and Long is %lu, %lu, %lu, %lu.\n",
           sizeof(short_a), sizeof(int_a), sizeof(unsigned_a), sizeof(long_a));
    return 0;
}

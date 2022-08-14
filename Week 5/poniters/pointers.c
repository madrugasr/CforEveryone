/*
    Pointers.
    Appl the concept of pointers to manipulate memory.
    13, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;
    printf("\nPOINTERS\n");
    // print the value of pointer n in hexadecimal, decimal and valueof variable.
    printf("\nValue of Variable: %d", n);
    printf("\nValue in Hexadecimal %p", &n);
    printf("\nValue in Real: %d", &n);
    return 0;

    printf("\nV");
    // declare a pointer to an integer
    int *p = &n;
    printf("Pointer: %d", *p);
}

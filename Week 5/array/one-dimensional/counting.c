/*
    Counting
    Apply the concept of array and medie arithmetic.
    13, Algust, 2022
    Daniel Marques

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number[3] = {1, 2, 3};

    for (int i = 0; i <= 2; i++)
        printf("%d\n", number[i]);
    printf("\n");
    for (int i = 2; i >= 0; i--)
        printf("%d\n", number[i]);   
    return 0;
}

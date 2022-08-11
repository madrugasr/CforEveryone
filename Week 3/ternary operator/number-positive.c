/*
    Number Positive
    Apply the concept of ternary operator.
    7, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("\nNUMBER POSITIVE\n");
    printf("\nEnter a number: ");
    scanf("%d", &number);
    number = number < 0 ? printf("\nNegative") : printf("\nPositive");
    return 0;
}


/*
    Number Integer
    Apply the concept of ternary operator. 
    7, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float number;
    printf("\nNUMBER INTEGER\n");
    printf("\nEnter a number: ");
    scanf("%f", &number);
    number == (int)number ? printf("\nInteger") : printf("\nNot Integer");
    return 0;
}

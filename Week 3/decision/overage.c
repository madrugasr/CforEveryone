/*
    Overage
    Apply the cocept of decision(if, else if, else) to the program.
    6, Algust, 2020
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("\nOVERAGE\n");
    printf("\nEnter your Age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nYou are an Adult\n");
    }
    else
    {
        printf("\nYou are a Child\n");
    }
    return 0;
}

/*
    Sum
    Apply the concept of recursive function.
    10, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

// Function declaration
float sum(float num);

int main(int argc, char const *argv[])
{
    float num;
    printf("\nSUM\n");
    printf("\nEnter the number: ");
    scanf("%f", &num);
    printf("\nThe sum of natural numbers %.2f is %.2f\n", num, sum(num));
    return 0;
}

// Function Sum
float sum(float num)
{
    if (num == 0)
        return num;
    else
        return num + sum(num - 1);
}
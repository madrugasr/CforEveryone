/*
    Factorial
    Apply the concept of function to the program.
    10, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

// Function declaration
double factorial(double num);
double factorial_recursive(double num);

int main(int argc, char const *argv[])
{
    double n;
    short option;
    printf("\nFACTORIAL\n");
    printf("\nEnter the number: ");
    scanf("%lf", &n);
    printf("\n1. Factorial using Loop");
    printf("\n2. Factorial using Recursion\n");
    printf("\nEnter the option: ");
    scanf("%hd", &option);
    switch (option)
    {
    case 1:
        printf("\nThe factorial of %.0lf is %.0lf\n", n, factorial(n));
        break;
    case 2:
        printf("\nThe factorial of %.0lf is %.0lf\n", n, factorial_recursive(n));
        break;
    default:
        printf("\nInvalid option\n");
        break;
    }
    return 0;
}

// Function Factorial
double factorial(double num)
{
    double result = 1;
    for (double i = 2; i <= num; i++)
    {
        // result = result * i;
        result *= i;
    }
    return result;
}

// Function Factorial Recursive
double factorial_recursive(double num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial_recursive(num - 1);
    }
}
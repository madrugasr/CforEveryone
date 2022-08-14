/*
    Sequence Fibbonacci
    Apply the concept of function to the program.
    10, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>
#include <math.h>

// Function declaration
long long fibbonacci(long long num);
long long fibbonacci_recursive(long long num);

int main(int argc, char const *argv[])
{
    long long n;
    short option;
    printf("\nFIBBONACCI\n");
    printf("\nEnter the number: ");
    scanf("%lld", &n);
    printf("\n1. Fibbonacci using Loop");
    printf("\n2. Fibbonacci using Recursion\n");
    printf("\nEnter the option: ");
    scanf("%hd", &option);
    switch (option)
    {
    case 1:
        printf("\nThe fibbonacci of %lld is %lld\n", n, fibbonacci(n));
        break;
    case 2:
        printf("\nThe fibbonacci of %lld is %lld\n", n, fibbonacci_recursive(n));
        break;
    default:
        printf("\nInvalid option\n");
        break;
    }
    return 0;
}

// Function Fibbonacci
long long fibbonacci(long long n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        //First member
        long long sf1 = 1 + sqrt(5) / 2;
        pow(sf1, n);
        //Second member
        long long sf2 = 1 - sqrt(5) / 2;
        pow(sf2, n);
        
        return (pow(sf1, n) - pow(sf2, n)) / sqrt(5);

        //return (pow((1 + sqrt(5) / 2), n) - pow((1 - sqrt(5) / 2), n)) / sqrt(5);
    }
}

// Function Fibbonacci Recursive
long long fibbonacci_recursive(long long n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibbonacci_recursive(n - 1) + fibbonacci_recursive(n - 2);
}
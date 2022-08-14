/*
    Calculator
    Apply the concept of function to the program.
    10, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

// Function declaration
float sum(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main(int argc, char const *argv[])
{
    float num1, num2;
    short option;
    printf("\nCALCULATOR\n");
    printf("\nEnter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("\n1. Sum");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division\n");
    printf("\nEnter the option: ");
    scanf("%hd", &option);
    switch (option)
    {
        case 1:
            printf("\nThe sum of %.2f and %.2f is %.2f\n", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("\nThe subtraction of %.2f and %.2f is %.2f\n", num1, num2, sub(num1, num2));
            break;
        case 3:
            printf("\nThe multiplication of %.2f and %.2f is %.2f\n", num1, num2, mult(num1, num2));
            break;
        case 4:
            printf("\nThe division of %.2f and %.2f is %.2f\n", num1, num2, div(num1, num2));
            break;
        default:
            printf("\nInvalid option\n");
            break;
    }
    return 0;
}

// Function to Add two numbers
float sum(float num1, float num2)
{
    return num1 + num2;
}

// Function to Subtract two numbers
float sub(float num1, float num2)
{
    return num1 - num2;
}

// Function to Multiply two numbers
float mult(float num1, float num2)
{
    return num1 * num2;
}

// Function to Divide two numbers
float div(float num1, float num2)
{
    return num1 / num2;
}

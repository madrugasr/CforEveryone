/*
    Calculator
    Use the concept of Switch.
    6, Algust, 2020
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1, num2;
    short option;
    printf("\nCALCULATOR\n");

    printf("\nEnter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%f", &num2);
    printf("\n1. Sum");
    printf("\n2. Subtraction");
    printf("\n3. Division");
    printf("\n4. Multiplication\n");
    printf("\nChoose an option: ");
    scanf("%d", &option);
    switch (option)
    {
        case 1:
            printf("\nThe sum of %.2f and %.2f is %.2f", num1, num2, num1 + num2);
            break;
        case 2:
            printf("\nThe subtraction of %.2f and %.2f is %.2f", num1, num2, num1 - num2);
            break;
        case 3:
            printf("\nThe division of %.2f and %.2f is %.2f", num1, num2, num1 / num2);
            break;
        case 4:
            printf("\nThe multiplication of %.2f and %.2f is %.2f", num1, num2, num1 * num2);
            break;  
        default:
            printf("\nInvalid option");
            break;
    }

    return 0;
}

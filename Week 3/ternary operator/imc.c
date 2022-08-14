/*
    IMB - Body Mass Index
    Apply the concept of ternary operator to the program.
    6, Algust, 2020
    Daniel Marques
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    float weight, height, imc;
    printf("\nIMC - Body Mass Index\n");
    printf("\nEnter your Weight: ");
    scanf("%f", &weight);
    printf("\nEnter your Height: ");
    scanf("%f", &height);
    imc = weight / (height * height);
    
    (imc <= 18.5) ? printf("\nUnderweight")
    : (imc <= 25) ? printf("\nNormal") 
    : (imc <= 30) ? printf("\nOverweight") 
    : (imc <= 35) ? printf("\nObesity I") 
    : (imc <= 40) ? printf("\nObesity II") : printf("\nObesity III");

    return 0;
}

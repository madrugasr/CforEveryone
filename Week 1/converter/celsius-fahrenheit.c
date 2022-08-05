/*
    Convert Celsius to Fahrenheit
    26, July, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nCelsius to Fahrenheit\n");
    float celsius, fahrenheit;
    printf("\nTemperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("Temperature in Fahrenheit is: %f fahrenheits.", fahrenheit);
    return 0;
}

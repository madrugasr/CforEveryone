/*
    Converter Fahrenheit to Celsius
    26, July, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nFahrenheit to Celsius\n");
    float fahrenheit, celsius;
    printf("\nTemperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius is: %f degrees.", celsius);
    return 0;
}

/*
    Fine Speed
    Apply the concept of ternary operator. 
    7, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float speed;
    printf("\nFINE SPEED\n");
    printf("\nEnter a speed: ");
    scanf("%f", &speed);
    speed = (speed <= 0) ? printf("\nYou are Stopped") : (speed <= 90) ? printf("\nNo Fine") : printf("\nFine");
    return 0;
}

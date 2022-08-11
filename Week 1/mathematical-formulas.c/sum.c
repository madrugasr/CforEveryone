/*
    Sum Three Numbers	
    26, July, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c, sum;
    printf("\nSum Three Numbers\n");
    printf("\nEnter firt Number: ");
    scanf("%f", &a);
    printf("Enter second Number: ");
    scanf("%f", &b);
    printf("Enter third Number: ");
    scanf("%f", &c);
    sum = a + b + c; 
    printf("\nSum of three Numbers is: %f\n", sum);
    return 0;
}

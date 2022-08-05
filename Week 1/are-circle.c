/*
    Area of the Circle
    26, July, 2022
    Daniel Marques
*/

#include <stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{
    printf("\nArea of the Circle\n");
    float radius, area;
    printf("\nEnter radius of the Circle: ");
    scanf("%f", &radius);
    area = PI * (radius * radius);
    printf("\nArea of the Circle is: %f\n", area);
    return 0;
}

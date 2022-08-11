/*
    Square Matrix
    Apply the concept of loops to the program.
    10, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, n;
    printf("\nSQUARE MATRIX\n");
    printf("\nEnter the number of order of the Matrixs: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

/*
    Matrix.
    Apply the concept of array.
    14, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rows, cols, depth;
    printf("\nMATRIX THREE DIMENSIONAL\n");
    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the number of depth: ");
    scanf("%d", &depth);

    printf("\n");
    // create a matrix with rows, cols and depth
    int matrix[rows][cols][depth];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                printf("Enter a value for row %d, column %d and depth %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }
    printf("\nMatrix Three Dimensional\n");
    // print the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                printf("%d ", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
   return 0;
}

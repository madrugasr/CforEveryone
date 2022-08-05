/*
    CHAR
    A Fundamental Type
    4, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\nCHARACTER\n");
    char a = 'A';
    printf("\nA in Unicode ASCII is %d\n", a);
    printf("A the caracter is %c\n", a);
    printf("Three consecutives chars are %c, %c, and %c\n", a, a + 1, a + 2);
    printf("Tree bell rings chars are %c%c%c\n", '\a', '\a', '\a');
    return 0;
}

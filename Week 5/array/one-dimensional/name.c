/*
    Name
    Apply the concept of array.
    13, Algust, 2022
    Daniel Marques
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
    char first_name[30], last_name[50];
    printf("\nNAME\n");
    printf("\nEnter your first name: ");
    scanf("%s", first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("\nYour name is %s %s\n", first_name, last_name);
    return 0;
}

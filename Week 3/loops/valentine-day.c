/*
    Valentine Day
    Apply the concept of loops to the program.
    6, Algust, 2020
    Daniel Marques
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name_girfriend[10];
    short int a;
    printf("\nValentine Day\n");
    printf("\nWhat is name of your Girlfriend? ");
    scanf("%s", &name_girfriend);
    printf("From 0 a 10, how much do you like her? ");
    scanf("%d", &a);

    if (a <= 5)
    {
        printf("\nJust friends!");
    }
    else if (a > 5 && a < 8)
    {
        printf("\nYou are liking her!");
    }
    else if (a >= 8 && a <= 10)
    {
        while (a > 0 && a <= 10)
        {
            printf("\nI Love You %s", name_girfriend);
            a--;       
        }    
    }
    else
    {        
        printf("\nInvalid number");
    }

    return 0;
}

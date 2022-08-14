/*
    Grades
    Apply the concept of array and medie arithmetic.
    13, Algust, 2022
    Daniel Marques
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int notes[3];
    printf("\nNOTES\n\n");

    int sum_note = 0;
    for (int i = 0; i <= 3; i++)
    {
        printf("Enter a note %d: ", i + 1);
        scanf("%d", &notes[i]);
        sum_note += notes[i]; // sum of all grades
    }

    int average_note = sum_note / 4;
    printf("\nThe mean is: %d", average_note);

    (average_note >= 5) ? printf("\nCongretulatios! You have passed the Year!\n") 
    : printf("\nYou did no pass the Year!\n");
    return 0;
}

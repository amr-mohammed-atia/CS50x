#include <stdio.h>

int main(void)
{
    // int x;
    // int y;
    // printf("Enter X and Y: ");
    // scanf("%i %i", &x, &y);
    // if (x > y)
    // {
    //     printf("X is greater than Y.\n");
    // }
    // else if (x < y)
    // {
    //     printf("X is smaller than Y.\n");
    // }
    // else
    // {
    //     printf("X is equal to Y.\n");
    // }
    char choice;
    printf("Do you agree to the terms and conditions? (y/n) ");
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        printf("Agreed!\n");
    }
    else if (choice == 'n' || choice == 'N')
    {
        printf("Disagreed!\n");
    }
    else
    {
        printf("Invalid input!\n");
    }
}
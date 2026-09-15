#include <stdio.h>

int main(void)
{
    // First part:
    // Initialise the variables
    int x;
    int y;
    // Present user with the request and ask for input
    printf("Enter X and Y: ");
    scanf("%i %i", &x, &y);
    // Condition that handles the comparison of inputs
    if (x > y)
    {
        printf("X is greater than Y.\n");
    }
    else if (x < y)
    {
        printf("X is smaller than Y.\n");
    }
    else
    {
        printf("X is equal to Y.\n");
    }
    // End of first part
    
    // Second part:
    // Initialise the variable
    char choice;
    // Send the request to the user and wait for response
    printf("Do you agree to the terms and conditions? (y/n) ");
    scanf(" %c", &choice);
    // Condition that handles the user's response
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
    // End of second part
}
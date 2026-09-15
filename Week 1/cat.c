#include <stdio.h>

int main(void)
{
    // Using a while loop for repetition
    int i = 0;
    while (i < 3)
    {
        break; // PLACEHOLDER
        i++;
    }

    // Using a for loop for repetition
    for (int i = 0; i < 3; i++)
    {
        break; //PLACEHOLDER
    }

    // Asking user how many times to meow
    int number;
    printf("How many times do you want the cat to meow? ");
    scanf("%i", &number);
    // Input validation
    while (number <= 0)
    {
        printf("How many times do you want the cat to meow? ");
        scanf("%i", &number);
    }
    // Printing meow
    for (int i = 0; i < number; i++)
    {
        printf("meow\n");
    }
}
#include <stdio.h>

int input_with_check(void);
void meow(void);
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
    printf("How many times do you want the cat to meow? ");
    meow();
}

int input_with_check(void){
    // Checking inputs to prevent incompatible values
    int number;
    do
    {
        scanf("%i", &number);
    }
    while (number <= 0);
    // Return the correct value for later use
    return number;
}

void meow(void)
{
    // Getting user input
    int number = input_with_check();
    // Printing meow
    for (int i = 0; i < number; i++)
    {
        printf("meow\n");
    }
}
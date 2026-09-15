#include <stdio.h>

int input_with_check(void);
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
    int number = input_with_check();
    // Printing meow
    for (int i = 0; i < number; i++)
    {
        printf("meow\n");
    }
}

int input_with_check(void){
    int number;
    do
    {
        scanf("%i", &number);
    }
    while (number <= 0);

    return number;
}
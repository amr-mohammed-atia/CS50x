#include <stdio.h>

int main(void)
{
    int user_input;
    int count = 0;
    do 
    {
        printf("Change owed: ", ' ');
        scanf("%i", &user_input);
    }
    while (0 > user_input > 100);
    // Checking for coins
    while (user_input != 0)
    {
        while (user_input >= 25)
        {
            user_input = user_input - 25;
            count++;
        }

        while (user_input >= 10)
        {
            user_input = user_input - 10;
            count++;
        }

        while (user_input >= 5)
        {
            user_input = user_input - 5;
            count++;

        }

        while (user_input >= 1)
        {
            user_input = user_input - 1;
            count++;
        }
    }
    printf("Minimum amount of coins: %i", count);
}
#include <stdio.h>

int main(void)
{
    int user_input;
    int i;
    int j;
    char hashtag = '#';
    char space = '-';
    do
    {
        printf("Enter a number from (1-8): ");
        scanf("%i", &user_input);
    }
    while(1 > user_input > 8);

    for (int i = 0; i < user_input; i++)
    {
        printf("%c", hashtag);
    }
    
    for (int j = 0; j < 2; j++)
    {
        printf("%c", space);
    }
}
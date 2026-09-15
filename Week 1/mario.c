#include <stdio.h>

int main(void)
{
    int user_input;
    int i;
    int j;
    int k;
    int l;
    char hashtag = '#';
    char space = '-';
    do
    {
        printf("Enter a number from (1-8): ");
        scanf("%i", &user_input);
    }
    while(1 > user_input > 8);

}
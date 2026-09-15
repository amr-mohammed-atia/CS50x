#include <stdio.h>

int main(void)
{
    int value_1;
    int value_2;
    char operator;
    printf("Enter your equation: ");
    scanf("%i %c %i", &value_1, &operator, &value_2);

    if (operator == '+')
    {
        printf("The result is: %i", value_1 + value_2);
    }
    else if (operator == '-')
    {
        printf("The result is: %i", value_1 - value_2);
    }
    else if (operator == '*')
    {
        printf("The result is: %i", value_1 * value_2);
    }
    else if (operator == '/')
    {
        printf("The result is: %.2f", (float)value_1 / value_2);
    }
}
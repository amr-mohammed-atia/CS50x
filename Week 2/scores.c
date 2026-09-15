#include <stdio.h>

float average(int numbers[], int input_amount);

int main(void)
{
    int input_amount = 0;
    int user_input = 0;

    do
    {
        printf("Enter the amount of scores: ");
        scanf("%i", &input_amount);
    }
    while (input_amount <= 0);
    
    int scores[input_amount];

    for (int i = 0; i < input_amount; i++)
    {
        do
        {
            printf("Enter score: ");
            scanf("%i", &scores[i]);
        }
        while (0 >= scores[i] >= 100);
    }
    printf("Average score is: %.2f\n", average(scores, input_amount));
}

float average(int numbers[], int input_amount)
{
    int sum = 0;
    for (int j = 0; j < input_amount; j++)
    {
        sum += numbers[j];
    }
    return (sum / input_amount);
}
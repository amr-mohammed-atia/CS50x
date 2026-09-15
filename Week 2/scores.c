#include <stdio.h>
// Prototype
float average(int numbers[], int input_amount);

int main(void)
{
    // Initialisation of user values
    int input_amount = 0;
    int user_input = 0;

    printf("Average Score Calculator.\n");
    // Input Validation
    do
    {
        // Amount of values which will determine the average and the size of the array
        printf("Enter the amount of scores: ");
        scanf("%i", &input_amount);
    }
    while (input_amount <= 0);
    // Set the size of the array
    int scores[input_amount];

    for (int i = 0; i < input_amount; i++)
    {
        // Collecting the scores from the user
        // Input validation
        do
        {
            printf("Enter score: ");
            scanf("%i", &scores[i]);
        }
        while (0 >= scores[i] >= 100);
    }
    // Displays the average score to the user
    printf("Average score is: %.2f\n", average(scores, input_amount));
}
// Function that calculates the average from the array
float average(int numbers[], int input_amount)
{
    int sum = 0;
    for (int j = 0; j < input_amount; j++)
    {
        // Getting each value from the array and adding them
        sum += numbers[j];
    }
    // Return the average to be used in the print function above
    return (sum / (float) input_amount);
}
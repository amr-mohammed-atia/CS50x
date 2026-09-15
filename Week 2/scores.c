#include <stdio.h>

int main(void)
{
    int scores[3];
    int user_input = 0;

    for (int i = 0; i < 3; i++)
    {
        do
        {
            printf("Enter score: ");
            scanf("%i", &scores[i]);
        }
        while (0 >= scores[i] >= 100);
    }
    printf("Average score is: %.2f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}
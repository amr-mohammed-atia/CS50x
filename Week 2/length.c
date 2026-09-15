#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0;
    char name[10];
    printf("Enter your name: ");
    
    scanf("9s%", name);

    while ((int) name[i] != 127)
    {
        i++;
    }
    printf("\n %i", name[3]);
    printf("The length of your name is: %i", i);
}
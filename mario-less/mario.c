#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j;

    do
    {
        height = get_int("Enter Height here : ");
    }
    while (height < 1 || height > 8);

    for (i = 1; i <= height; i++)
    {
        for (j = height; j >= 1; j--)
        {
            if (i >= j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
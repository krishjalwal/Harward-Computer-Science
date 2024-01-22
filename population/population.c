#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end, years = 0;
    do
    {
        printf("Enter starting population atleast 9 : ");
        scanf("%d", &start);
    }
    while (start < 9);

    do
    {
        printf("Enter ending population atleast minimum %d : ", start);
        scanf("%d", &end);
    }
    while (end < start);

    while (start < end)
    {
        start = start + start / 3 - start / 4;
        ++years;
    }

    printf("Years: %d\n", years);
    return 0;
}
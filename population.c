#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    int end;
    int years = 0;

    do
    {
        n = get_int("Positive number: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("End size: ");
    }
    while (end < n);

    // TODO: Calculate number of years until we reach threshold
    do
    {
        n = n + (n / 3) - (n / 4);
        years = years + 1;
    }
    while (n < end);


    // TODO: Print number of years
    printf("Years: %i\n", years);
}

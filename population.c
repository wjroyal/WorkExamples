#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    //Prompt for start size
    int i;
    do
    {
        i = get_int("Start population: \n");
    }
    while (i < 9);

    //Prompt for end size
    int j;
    do
    {
        j = get_int("End population: \n");
    }
    while (j < i);

    //Calculate number of years
    int years = 0;
    while (i < j)
    {
        i = i + (i / 3) - (i / 4);
        years++;
    }

    //Print number of years
    printf("Years: %d\n", years);
}
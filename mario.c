#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_pyramid(int size);

int main(void)
{
    //Get size of pyramid
    int n = get_size();

    //Print pyramid of bricks
    print_pyramid(n);
}
    // Define get_size; limiting integer values through and including the boundary numbers 1-8
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    return n;


}
     // Define print pyramid, using operators to ensure row 1 has 1 brick and 7 spaces
void print_pyramid(int size)
{
    for (int i = 0; i < size; i++)

    {

        // Prints left side of pyramid
        
        for (int k = i + 1; k < size; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // SETS CONSTANT SPACE IN BETWEEN BRICK SETS

            printf("  ");

        //Prints right side of pyramid

         for (int m = 0; m <= i; m++)
        {
            printf("#");
        }

        printf("\n");
    }
}
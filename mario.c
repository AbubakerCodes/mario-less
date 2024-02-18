#include <cs50.h>
#include <stdio.h>

int get_height();
void print_pyramid(int n);

int main(void)
{
    // get height
    int pyramid_height = get_height();

    // print pyramid
    print_pyramid(pyramid_height);
}

int get_height(viod)
{
    int height;
    // prevent entry of negative values
    do
    {
        height = get_int("Enter The height of pyramid: ");
    }
    while (height > 8 || height < 1);
    return height;
}

void print_pyramid(int n)
{
    int rows, space;
    for (rows = 1; rows <= n; rows++)
    {
        for (space = 1; space <= n; space++)
        {
            if ((rows + space) <= n)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
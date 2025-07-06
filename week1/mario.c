#include <stdio.h>
#include <cs50.h>
int get_positive_int(void);

void create_empty_space(int n);
void create_block(int n);
void create_pyramid(int n);

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("How tall should the pyramid be? ");
    }
    while (n < 1);
    return n;
}

int main(void)
{
    int height = get_positive_int();
    create_pyramid(height);
}

void create_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        create_empty_space(height - (i+1));
        create_block(i+1);
        printf("  ");
        create_block(i+1);
        printf("\n");
    }
}

void create_empty_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void create_block(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}
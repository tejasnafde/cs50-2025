#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What is x: ");
    int y = get_int("What is y: ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if ( x > y)
    {
        printf("actually x is greater than y \n");
    }
    else
    {
        printf("both be kinda equal dawg\n");
    }
}
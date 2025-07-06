#include <stdio.h>
#include <cs50.h>

void meow(int n);
int get_positive_int(void);

int main(void)
{   
    int n = get_positive_int();    
    meow(n);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("How many times do you want me to meow?😼 ");
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow 🐈\n");
    }
}
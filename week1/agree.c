#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Thanks for agreeing\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Please agree to proceed\n");
        main();
    }
    else
    {
        printf("Please enter y or n\n");
        main();
    }
}
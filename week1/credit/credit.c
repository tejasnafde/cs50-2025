#include <stdio.h>
#include <cs50.h>

bool validate_card(long card_number, int length);
bool validate_length(int length);
int get_length(long card_number);

int main(void)
{
    long card_number = get_long("Number: ");
    int length = get_length(card_number);
    printf("Length: %d\n", length);
    bool check_length = validate_length(length);
    printf("Check length: %d\n", check_length);
    if (!check_length)
    {
        printf("Please enter a valid card number \n");
        main();
    }
    else
    {
        bool result = validate_card(card_number, length);
        printf("Result: %d\n", result);
        if (result)
        {
            printf("Valid Card! moni taken heheeh 🤑\n");
        }
        else
        {
            printf("Invalid card broke boy 🤣\n");
        }
    }
}
int get_length(long card_number)
{
    int length = 0;
    while (card_number > 0)
    {
        card_number /= 10;
        length++;
    }
    return length;
}
bool validate_length(int length)
{
    if (length == 13 || length == 15 || length == 16)
    {
        return true;
    }
    return false;
}

bool validate_card(long card_number, int length)
{
    int sum = 0;
    int position = 0;
    while (card_number > 0)
    {
        int digit = card_number % 10;
        card_number /= 10;
        if (position % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int product = digit * 2;
            if (product > 9)
            {
                product = (product % 10) + (product/10);
            }
            sum += product;
        }
        position++;
    }
    return sum % 10 == 0;
}
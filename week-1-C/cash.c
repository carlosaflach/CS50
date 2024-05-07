#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
int calculate_minimum_coins(int cents);

int main(void)
{
    int cents = get_positive_int();

    int coins = calculate_minimum_coins(cents);

    printf("%d\n", coins);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Change owed: ");
    }
    while (n < 0);
    return n;
}

int calculate_minimum_coins(int cents)
{
    int coinsNeededForChange = 0;
    int availableCoinsToChange[] = {25, 10, 5, 1};
    int size = sizeof(availableCoinsToChange) / sizeof(availableCoinsToChange[0]);

    for (int i = 0; i < size; i++)
    {
        while (cents >= availableCoinsToChange[i])
        {
            cents -= availableCoinsToChange[i];
            coinsNeededForChange++;
        }
    }

    return coinsNeededForChange;
}

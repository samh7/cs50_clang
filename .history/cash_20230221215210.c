#include <stdio.h>
int getDimes(float change);
int getPennies(float change);
int getNickels(float change);
int getQuarters(float change);
#include <math.h>
int main(int argc, char const *argv[])
{
    float change;
    printf("Change owed: ");
    scanf("%f", &change);
    int quarters = getQuarters(change);
    change -= (quarters * 0.25);
    int dimes = getDimes(change);
    change -= (dimes * 0.25);
    int nickels = getNickels(change);
    change -= (nickels * 0.25);
    printf("%f", quarters);
    return 0;
}

int getQuarters(float change)
{
    int num = 0;
    while (change - 0.25 > 0)
    {
        num++;
    }
}
int getPennies(float change)
{
    int num = 0;
    while (change - 0.01 > 0)
    {
        num++;
    }
}
int getNickels(float change)
{
    int num = 0;
    while (change - 0.05 > 0)
    {
        num++;
    }
}
int getDimes(float change)
{
    int num = 0;
    while (change - 0.10 > 0)
    {
        num++;
    }
}

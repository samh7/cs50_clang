#include <stdio.h>
int getDimes(float);
int getPennies(float);
int getNickels(float);
int getQuarters(float);
#include <math.h>
int main(int argc, char const *argv[])
{
    float change;
    float _change;
    printf("Change owed: ");
    scanf("%f", &change);
    _change = change;
    int quarters = getQuarters(_change);
    _change -= (quarters * 0.25);
    int dimes = getDimes(_change);
    _change -= (dimes * 0.10);
    int nickels = getNickels(_change);
    _change -= (nickels * 0.05);
    int pennies = getPennies(_change);
    _change-= pennies;
    printf("quaters %i\n", quarters);
    printf("dimes %i\n", dimes);
    printf("nickels %i\n", nickels);
    printf("Pennies %i\n",pennies);


    return 0;
}

int getQuarters(float change)
{
    int num = 0;
    while (change >= 0.25)
    {
        num++;
        change -= 0.25;
    }
    return num;
}
int getPennies(float change)
{
    int num = 0;
    while (change > 0.01)
    {
        num++;
        change -= 0.01;
    }
    return num;
}
int getNickels(float change)
{
    int num = 0;
    while (change >= 0.05)
    {
        num++;
        change -= 0.05;
    }
    return num;
}
int getDimes(float change)
{
    int num = 0;
    while (change  >= 0.10)
    {
        num++;
        change -= 0.10;
    }
    return num;
}

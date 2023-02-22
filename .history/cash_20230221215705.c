#include <stdio.h>
int getDimes(float);
int getPennies(float);
int getNickels(float);
int getQuarters(float);
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
    printf("%i", quarters);
    return 0;
}

int getQuarters(float change)
{
    int num = 0;
    while (change - 0.25 >= 0)
    {
        num++;
        change -= 0.25;
    }
    return num;
}
int getPennies(float change)
{
    int num = 0;
    while (change - 0.01 >= 0)
    {
        num++;
        change -= 0.01;
    }
    return num;
}
int getNickels(float change)
{
    int num = 0;
    while (change - 0.05 >= 0)
    {
        num++;
        change -= 0.05;
    }
    return num;
}
int getDimes(float change)
{
    int num = 0;
    while (change - 0.10 >= 0)
    {
        num++;
        change -= 0.01;
    }
    return num;
}

// AE = 15 digits , starts with 34 || 37

// MC = 16        , starts with 51 || 52 || 53 || 54 || 55

// Visa = 13 || 16, starts with 4

// luhn's Algorithm

#include <stdio.h>
#include <stdbool.h>

bool isVisa(long long);
int getLength(long long);
bool checksum(long long);
int main(int argc, char **argv)
{
    // bool t = checksum(4003600000000014);
    printf("%i", getLength(123456789));
    return 0;
}

int getLength(long long cardNumber)
{
    int numLen = 0;
    while (cardNumber > 0)
    {
        numLen++;
        cardNumber /= 10;
    }
    return numLen;
}

bool isVisa(long long cardNumber)
{
    int numLen = getLength(cardNumber);
    if (numLen != 13 && numLen != 16)
        return false;
    return true;
}
bool checksum(long long cardNumber)
{
    int numLen = getLength(cardNumber);
    long long cardNumber1 = cardNumber;
    int finalSum = 0;
    int totalSecond2Last = 0;
    int sumOfRest = 0;
    for (int i = 0; i < numLen; i++)
    {

        if (i % 2 != 0)
        {
            int second2Last = cardNumber1 % 10;
            totalSecond2Last += (second2Last * 2);
        }
        else
        {
            sumOfRest += cardNumber1 % 10;
            cardNumber1 /= 10;
        }
    }
    finalSum +=totalSecond2Last;
    finalSum += sumOfRest;
    if(!(finalSum%10 == 0)) return false;
    return true;
}
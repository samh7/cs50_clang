#include <stdbool.h>
#include <stdio.h>
int getLength(long long cardNumber)
{
    int numLen_ = 0;
    while (cardNumber > 0)
    {
        numLen_++;
        cardNumber /= 10;
    }
    return numLen_;
}

bool isVisa(long long cardNumber)
{
    int numLen = getLength(cardNumber);
    if (numLen != 13 && numLen != 16)
        return false;
    long long cardNumber1 = cardNumber;
    for (int i = 0; i < numLen - 1; i++)
    {
        cardNumber1 /= (10);
    }
    if (cardNumber1 != 4)
        return false;
    return true;
}

bool checksum(long long numer)
{
    int numerLen = getLength(numer);
    int second2Last = 0;
    int numOfDigits = 0;
    int sumOfRest = 0;
    int totalSecond2Last = 0;
    for (int i = 0; i < numerLen; i++)
    {
        if (i % 2 != 0)
        {
            // printf("before %lli\n", numer);
            second2Last = numer % 10;
            second2Last *= 2;

            numOfDigits = getLength(second2Last);
            for (int j = 0; j < numOfDigits; j++)
            {
                totalSecond2Last += (second2Last % 10);
                second2Last /= 10;
            }
            numer /= 10;
        }
        else
        {
            sumOfRest += (numer % 10);
            numer /= 10;
        }
    }
    int totalSums = totalSecond2Last;
    totalSums += sumOfRest;
    if (!(totalSums % 10 == 0))
        return false;
    return true;
}

bool isAuthenticVisaCard(long long visaCardNumber){
    if(!isVisa(visaCardNumber)) return false;
    if(!checksum(visaCardNumber)) return false;
    return true;
}
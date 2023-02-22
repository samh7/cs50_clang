// AE = 15 digits , starts with 34 || 37

// MC = 16        , starts with 51 || 52 || 53 || 54 || 55

// Visa = 13 || 16, starts with 4

// luhn's Algorithm

#include <stdio.h>
#include <stdbool.h>

bool isVisa(long);
int getLength(long);
bool checksum(long);
int main(int argc, char **argv)
{
    printf("%i",getLength(123456789));
    return 0;
}

int getLength(long cardNumber)
{
    int numLen = 0;
    while (cardNumber > 0)
    {
        numLen++;
        cardNumber /= 10;
    }
    return numLen;
}

bool isVisa(long cardNumber)
{
    int numLen = getLength(cardNumber);
    if (numLen != 13 && numLen != 16)
        return false;
    return true;
}
bool checksum(long cardNumber)
{
    int numLen = getLength(cardNumber);
    long cardNumber1 = cardNumber;
    for (int i = 0; i < numLen; i++)
    {
        int totalSecond2Last;
        if(i % 2 != 0){
            int second2Last = cardNumber1%10;
            totalSecond2Last += (second2Last * 2);
        }
        else{
            cardNumber1 /=10;
        }
        int tmpNum = 0;
    }
        return true;
}
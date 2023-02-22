#include <stdio.h>
#include "credit_lib.h"
#include <stdbool.h>
int main(int argc, char **argv)
{
    long long cardNumber = checksum(4003600000000014);
    // if (isAuthenticVisaCard(cardNumber))
    // {
    //     printf("Authentic card");
    // }
    // else
    {
        printf("%i\n", getLength(cardNumber));
        printf("Fake card");
    }
    return 0;
}

// bool is

// AE = 15 digits , starts with 34 || 37

// MC = 16        , starts with 51 || 52 || 53 || 54 || 55

// Visa = 13 || 16, starts with 4

// luhn's Algorithm
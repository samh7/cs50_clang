#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 10; i >0 ; i--)
    {
        //   printf("*");
        for (int j = 10; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

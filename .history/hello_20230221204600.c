#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("#");
        }
               printf("\n");
    }

    return 0;
}

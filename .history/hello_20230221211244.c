#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

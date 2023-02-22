#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++){
        for (int i = 0; i < 10; i++)
        {
                            printf("#");
            for (int j = 0; j <= i; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 9; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

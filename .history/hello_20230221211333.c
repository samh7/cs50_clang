#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            if(0){

            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    int height = -1;
    while (height < 0)
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (j < height - i - 1)
            {
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

    printf("%i", height);
    return 0;
}

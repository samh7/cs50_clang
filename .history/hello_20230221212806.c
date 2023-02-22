#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    int height = -1;
    while (height < 0)
    {
        printf("Height");
        scanf("%i", &height);
    }
    printf("%i", height);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    int height = NULL;
    while (strlen(height) == NULL || height < 0)
    {
        printf("Height");
        scanf("%i", &height);
    }
    printf("%i", height);
    return 0;
}

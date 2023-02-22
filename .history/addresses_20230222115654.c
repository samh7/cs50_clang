#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 50;
    int *j = &n;
    n = 12;
    printf("%p\n", &n);
    printf("%p\n", &j);
    printf("\n");

    printf("%i\n", n);
    printf("%i\n", *j);

    return 0;
}

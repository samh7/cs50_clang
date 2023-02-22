#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 50;
    // printf("%p\n", &n);
    int *j = &n;
    // printf("%p\n", &j);
    n = 12;
    // printf("%p\n", &n);
    // printf("%p\n", &j);
    // printf("\n");

    // printf("%i\n", n);
    printf("%p\n", j);

    return 0;
}

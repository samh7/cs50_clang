#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 50;
    printf("%p\n", &n);
    int *j
    ; j= &n;
    printf("p: %p\n", j);
    printf("%p\n", &j);
    n = 12;
    printf("%p\n", &n);
    printf("p: %p\n", j);

    printf("%p\n", &j);
    printf("\n");

    printf("%i\n", n);
    printf("p: %p\n", j);
    printf("%i\n", *j);

    return 0;
}

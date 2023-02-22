#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 50;
    int *j = &n;
    n = 12;
    printf("%p", &j);

    return 0;
}

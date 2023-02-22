#include<stdio.h>
void swap(int *a, int *b){
    int *tmp = a;
    a = b;
    b=tmp;
}

int main(int argc, char const *argv[])
{
    int *n;
    *n = 50;
    printf("%i", *n);

    return 0;
}

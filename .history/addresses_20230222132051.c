#include<stdio.h>
void swap(int *a, int *b){
  int *tmp = a;
  a = b;
  b = tmp;
}

int main(int argc, char const *argv[])
{
    int n, m;
    n = 50;
    m = 100;
    swap(&m,&n);
    printf("%i", n);

    return 0;
}

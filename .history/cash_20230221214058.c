#include<stdio.h>
int main(int argc, char const *argv[])
{
    float change;
    printf("Change owed: ");
    scanf("%f", &change);
    change = round(change);
    return 0;
}

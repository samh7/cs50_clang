#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float change;
    printf("Change owed: ");
    scanf("%f", &change);
    change = round(change);
    printf("%f", change);
    return 0;
}

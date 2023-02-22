#include<stdio.h>
#include<math.h>
int getQuarter(float change){
    int num = 0;
    while (change - 0.25 >  0)
    {
        num++;
    }

}
int getPennies(float change){
    int num = 0;
    while (change - 0.01 >  0)
    {
        num++;
    }

} int getNickels(float change){
    int num = 0;
    while (change - 0.05 >  0)
    {
        num++;
    }

}
int getDimes(float change){
    int num = 0;
    while (change - 0.10 >  0)
    {
        num++;
    }

}
int main(int argc, char const *argv[])
{
    float change;
    printf("Change owed: ");
    scanf("%f", &change);
    // change = round(change)
    printf("%f", change);
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 ; j++)
        {
            if(j < 10-i-1){
                printf(" ");
            }
            else{
            printf("*");}

        }
        for (int j = 0; j <i=0; j++)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}

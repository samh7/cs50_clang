#include<stdio.h>

// char* getName(char* word){
//     printf("%s\n", word);
//     char *name;
//     scanf("%s", name);
//     return name;
// }
int main(int argc, char const *argv[])
{
    int num  =50;
    int *p;
    *p = 60;
    *num  = p;
    char* name =  "hello";
        printf("%c",*(name+2));

    return 0;
}

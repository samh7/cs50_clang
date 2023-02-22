#include<stdio.h>

char* getName(char* word){
    printf("%s\n", word);
    char *name;
    scanf("%s", *name);
    return name;
}
int main(int argc, char const *argv[])
{
    char* name =  getName("Get name");
    printf("%s",name);
    return 0;
}

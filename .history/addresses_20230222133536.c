#include<stdio.h>

char* getName(char* word){
    printf("%s\n", word);
    char *name;
    scanf("%s", &name);
    return name;
}
int main(int argc, char const *argv[])
{
    char *helloWorld = "Hello World";
    printf("%s", getName("Get name"));
    return 0;
}

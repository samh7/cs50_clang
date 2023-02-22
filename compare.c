#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
char *str1 = "hello";
char *str2 = "hello";

if(strcmp(str1, str2) == 0){
    printf("%p",str1);

}
else{
    printf("Different");
}

    return 0;
}

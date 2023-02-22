#include<stdio.h>
int main(int argc, char const *argv[])
{
char *str1 = "hello";
char *str2 = "hello";

if(&str1 == &str2){
    printf("same");

}
else{
    printf("Different");
}

    return 0;
}

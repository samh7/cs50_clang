#include<stdio.h>

typedef char* string;
string get_string(){
    char str[] = "hello";
    char *str1[6] = &str;
    return str1;
}
int main(void){
    char * answer = &get_string;
    printf("Hello, %s", *answer);

    return 0;
}

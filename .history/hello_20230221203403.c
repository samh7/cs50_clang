#include<stdio.h>

typedef char* string;
string get_string(){
    return "hello";
}
int main(void){
    string *answer = get_string;
    printf("Hello, %s", answer);

    return 0;
}

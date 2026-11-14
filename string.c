#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    gets(str);

    printf("your input is :%s", str);

    return 0;
}
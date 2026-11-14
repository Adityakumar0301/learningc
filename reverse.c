#include<stdio.h>
#include<string.h>

int main(){

    int j;
    char a[100];
    char temp;

    puts("Enter your string");
    fgets(a, sizeof(a), stdin);

    int size = 0;
    int k = 0;

    while(a[k] != '\0'){
        size++;
        k++;
    }

    if(size > 0 && a[size-1] == '\n'){
        size--;
        a[size] = '\0';
    }

    j = size - 1;

    for(int i = 0; i < j; i++, j--){

        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }

    puts(a);

    return 0;
}
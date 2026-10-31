#include <stdio.h>

int fact(int x) {

    if(x == 0 || x == 1)
        return 1;

    int factorial = x * fact(x - 1);
    return factorial;
}

int main() {

    int n;
    printf("Enter a number n:\n");
    scanf("%d", &n);
    int factorial = fact(n);
    printf("Factorial of n is %d", factorial);



    
    return 0;
}
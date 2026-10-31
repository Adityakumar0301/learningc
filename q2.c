#include <stdio.h>
int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}


int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}


int isPalindrome(int n) {
    return n == reverseNumber(n);
}


void printPrimesInRange(int low, int high) {
    printf("Primes between %d and %d: ", low, high);
    for (int i = low; i <= high; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int num, low, high;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d is %s\n", num, isPrime(num) ? "a prime number" : "not a prime number");
    printf("%d is %s\n", num, isPalindrome(num) ? "a palindrome" : "not a palindrome");

    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);
    printPrimesInRange(low, high);

    return 0;
}
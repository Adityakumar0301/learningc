#include <stdio.h>

int fact(int y) {
    int factorial = 1;

    for (int i = 1; i <= y; i++) {
        factorial = factorial * i;
    }

    return factorial;
}

void lines(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j <= i; j++) {
            int factorial = fact(i) / (fact(j) * fact(i - j));

            printf("%d ", factorial);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of lines of triangle required: ");
    scanf("%d", &n);

    printf("Pascal's Triangle is:\n");
    lines(n);

    return 0;
}
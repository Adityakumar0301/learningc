#include <stdio.h>

int main() {
    int n, i, j, maxIndex, temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter marks:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {

        maxIndex = i;

        for (j = i + 1; j < n; j++) {

            if (a[j] > a[maxIndex]) {
                maxIndex = j;
            }
        }

        temp = a[i];
        a[i] = a[maxIndex];
        a[maxIndex] = temp;
    }

    printf("Marks in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nHighest marks = %d", a[0]);
    printf("\nLowest marks = %d", a[n - 1]);

    return 0;
}